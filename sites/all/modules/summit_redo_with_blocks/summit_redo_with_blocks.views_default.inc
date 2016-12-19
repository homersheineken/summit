<?php
/**
 * @file
 * summit_redo_with_blocks.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function summit_redo_with_blocks_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'faq';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FAQ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 'title',
    'field_faq_category_faq' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'vscc_controls';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['vscc_controls_pause'] = 0;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_faq_category_faq' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'vscc_controls';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['vscc_controls_pause'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'none';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '100';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['sync'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['fixed_height'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="hero">
    <img src="sites/default/files/faq_header_image.png" />
    <div class="herotext faq">FAQ</div>
</div>
<script>
jQuery( document ).ready(function() {
jQuery("#vscc_controls_previous_faq-page")
    .prependTo("#widget_pager_top_faq-page").text("");
    
    jQuery("#vscc_controls_next_faq-page")
    .appendTo("#widget_pager_top_faq-page").text("");
    });
</script>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: FAQ */
  $handler->display->display_options['fields']['field_faq_category_faq']['id'] = 'field_faq_category_faq';
  $handler->display->display_options['fields']['field_faq_category_faq']['table'] = 'field_data_field_faq_category_faq';
  $handler->display->display_options['fields']['field_faq_category_faq']['field'] = 'field_faq_category_faq';
  $handler->display->display_options['fields']['field_faq_category_faq']['label'] = '';
  $handler->display->display_options['fields']['field_faq_category_faq']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faq_category_faq']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_faq_category_faq']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_faq_category_faq']['multi_type'] = 'ul';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'agenda_page' => 'agenda_page',
  );

  /* Display: FAQ */
  $handler = $view->new_display('page', 'FAQ', 'page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq_category' => 'faq_category',
  );
  $handler->display->display_options['path'] = 'faq';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'FAQ';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Agenda */
  $handler = $view->new_display('page', 'Agenda', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="hero">
    <img src="sites/default/files/agenda_header_image.jpg" />
    <div class="herotext faq">Agenda</div>
</div>
<script>
    jQuery( document ).ready(function() {
        jQuery("#vscc_controls_previous_faq-page_1")
                .prependTo("#widget_pager_top_faq-page_1").text("");

        jQuery("#vscc_controls_next_faq-page_1")
                .appendTo("#widget_pager_top_faq-page_1").text("");
    });
</script>
<!-------Accordion-------->
<script src="//code.jquery.com/ui/1.11.4/jquery-ui.js"></script>
<link href="//code.jquery.com/ui/1.11.4/themes/smoothness/jquery-ui.css" rel="stylesheet" />
<!--<link href="https://jqueryui.com/resources/demos/style.css" rel="stylesheet" />-->
<script>
    jQuery(document).ready(function(){
        jQuery("#accordion1").accordion({
            active: false,
            heightStyle: "content",
            collapsible: true,
            icons: { "header": "ui-icon-plus", "activeHeader": "ui-icon-minus"  }
        });
        jQuery("#accordion2").accordion({
            heightStyle: "content",
            active: false,
            collapsible: true,
            icons: { "header": "ui-icon-plus", "activeHeader": "ui-icon-minus"  }
        });
        jQuery("#accordion3").accordion({
            heightStyle: "content",
            active: false,
            collapsible: true,
            icons: { "header": "ui-icon-plus", "activeHeader": "ui-icon-minus"  }
        });
        jQuery(".break").addClass( "ui-state-disabled" ).removeClass( "ui-state-default" ).css("opacity","1");
        jQuery(".break .ui-icon").remove();
    });
</script>
<style type="text/css">
    #accordion {
        margin-bottom: 20px;
    }
    .ui-state-default, .ui-widget-content .ui-state-default, .ui-widget-header .ui-state-default {
        border: none;
        background: white;
        font-weight: normal;
        color: #555555;
    }
    .ui-state-default:nth-child(even) {
        background: #cccccc;
    }
    .ui-state-active, .ui-widget-content .ui-state-active, .ui-widget-header .ui-state-active {
        border: none;
        font-weight: normal;
        color: #212121;
    }
    .ui-accordion-content:nth-child(odd) {
        background-color: white;
    }
    .ui-accordion .ui-accordion-header .ui-accordion-header-icon {
        position: absolute;
        right: 1.5em;
        left:auto;
        top: 50%;
        margin-top: -8px;
    }
    .ui-accordion .ui-accordion-content {
        border: 1px solid #aaaaaa;
    }
    .ui-accordion-header {
        font-family: \'BentonSans-Light\', \'BentonSans Light\', \'BentonSans\';
        font-weight: 200;
        font-style: normal;
        font-size: 26px;
        color: #666666;
        text-align: left;
    }
    .ui-accordion .ui-accordion-icons {
        padding-left: 1em;
    }
</style>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'agenda';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'FAQ';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['faq'] = $view;

  return $export;
}
