<?php
/**
 * @file
 * summit_redo_with_blocks.features.inc
 */

/**
 * Implements hook_views_api().
 */
function summit_redo_with_blocks_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function summit_redo_with_blocks_node_info() {
  $items = array(
    'agenda_page' => array(
      'name' => t('Agenda Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
