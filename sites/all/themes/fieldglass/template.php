<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 *
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */


/**
 * Implements theme_aggregator_block_item() from core Aggregator module
 */
function fieldglass_aggregator_block_item($variables) {
  // only show first X words of the RSS feed item's description
  $num_words = 25;
  $text = trim(strip_tags($variables['item']->description));
  $rgxwords = '/([^ ]*[ ]{0,1}){1,'. $num_words .'}/i'; // regex to get particular number of words

  if (preg_match($rgxwords, $text, $matches)) {
    $text_cut = $matches[0];
  }
  else {
    $text_cut = '';
  }
  // Display the external link to the item.
  return  '<div class="aggregator_feed_description">' . $text_cut . '<div class="aggregator_readmore"><a href="' . check_url($variables['item']->link) . '">' . t('Read More') . "</a></div></div>\n";
}

function fieldglass_preprocess_node(&$variables) {
  $node = $variables['node'];

  if ($node->type == 'resource' || $node->type == 'webinar' || $node->type == 'event') {
    $variables['content']['links']['node']['#links']['node-readmore']['title'] = t('Click Here') . "&raquo;";

    if ($variables['view_mode'] == 'teaser') {
      if (!empty($node->field_resource_type_1)) {
        // Extract taxonomy term reference from node
        $item = field_get_items('node', $node, 'field_resource_type_1');
        $term = taxonomy_term_load($item[0]['tid']);

        // Extract image from taxonomy term
        $item = field_get_items('taxonomy_term', $term, 'field_taxonomy_resource_image');
        $variables['resource_image'] = theme('image_style', array('style_name' => 'thumbnail', 'path' => $item[0]['uri']));
      }
    }
  }
  // add colorbox link to Resource and Webinar request links
  if ($node->type == 'resource' || $node->type == 'webinar') {
      if (isset($variables['content']['field_resource_request_link'][0]['#markup'])) {
      // add a duplicate Request link field that has no colorbox link (use for mobile)
      $variables['content']['field_resource_request_link_1'] = $variables['content']['field_resource_request_link'];
      $variables['content']['field_resource_request_link_1']['#prefix'] = '<div class="no-colorbox">';
      $variables['content']['field_resource_request_link_1']['#suffix'] = '</div>';
      
      $markup = $variables['content']['field_resource_request_link'][0]['#markup'];
      $colorbox = (strstr($markup, '?')) ? '&' : '?';
      $colorbox .= 'width=600&height=500&iframe=true';
      $colorbox_class = ' class="colorbox-load"';
      $variables['content']['field_resource_request_link'][0]['#markup'] = preg_replace('/(<a.+)(")/', "$1$colorbox$2$colorbox_class", $markup);
    }
  }
  // override Resource link title for Datasheets
  if ($node->type == 'resource') {
    if (isset($variables['content']['field_resource_request_link'][0]['#markup'])) {
      $markup = $variables['content']['field_resource_request_link'][0]['#markup'];
      $variables['content']['field_resource_request_link'][0]['#markup'] = preg_replace("/Request Datasheet/", "View Datasheet &raquo;", $markup);
    }
  }
}

function fieldglass_preprocess_views_view_field(&$vars) {
  // rewrite the "By Topic" term links for Resources, so that the
  // Topic Page URL is used instead of the term's URL
  if ($vars['view']->name == 'resource_page_webinars' || $vars['view']->name == 'resource_pages_by_type' || $vars['view']->name == 'resource_pages_by_topic') {
    if (strstr($vars['output'], 'resource_type_2')) {
      $term_links = array();
      $topic_tids = $vars['row']->field_field_resource_type_2;

      foreach($topic_tids as $topic_tid) {
        $tid = $topic_tid['raw']['tid'];
        $term = taxonomy_term_load($tid);
        $term_links[] = l($term->name, $term->field_taxonomy_topic_page['und'][0]['url']);
      }
      // create a fresh comma-separated list of terms
      $vars['output'] = implode(', ', $term_links);
    }
  }
}

function fieldglass_preprocess_search_result(&$vars) {
  // using result type for now, but should really do something
  // more descriptive; possibly use URL to determine section
  // and type to show
  switch ($vars['result']['type']) {
    case 'Resource (Event)':
      $type = t('Event');
      break;

    case 'Resource (Webinar)':
      $type = t('Webinar');
      break;

    default:
      $type = $vars['result']['type'];
  }
  $vars['info'] = $type . ' | ' . t('Date added') . ': ' . date('F j, Y', $vars['result']['node']->created);
}

function fieldglass_preprocess_views_view(&$vars) {
  if ($vars['view']->name == 'search') {
    $vars['exposed'] .= '<div class="search_results_title"><h2>' . t('Search Results...') . '</h2></div>';
  }
  if ($vars['view']->name == 'resource_pages_by_topic') {
    $markup = $vars['rows'];
    $vars['rows'] = preg_replace("/(Request Datasheet|Request Data Sheet)/", "View Datasheet &raquo;", $markup);
  }
}

function fieldglass_preprocess_page(&$vars, $hook) {
  // remove the "No front page content..." message on Home page.
  if (isset($vars['is_front'])) {
    unset($vars['page']['content']['content']['content']['system_main']['default_message']);
  }
}