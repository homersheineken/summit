<?php
/**
 * @file
 * company_profile.features.inc
 */

/**
 * Implements hook_views_api().
 */
function company_profile_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function company_profile_node_info() {
  $items = array(
    'attendee' => array(
      'name' => t('Attendee'),
      'base' => 'node_content',
      'description' => t('Summit Attendee'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
