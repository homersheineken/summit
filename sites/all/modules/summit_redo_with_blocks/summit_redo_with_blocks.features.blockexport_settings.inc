<?php
/**
 * @file
 * summit_redo_with_blocks.features.blockexport_settings.inc
 */

/**
 * Implements hook_default_blockexport_settings().
 */
function summit_redo_with_blocks_default_blockexport_settings() {
  $export = array();
  $export['block'][] = array(
  'bid' => 1,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => -17,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 2,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => -1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 3,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 10,
  'region' => 'dashboard_inactive',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 4,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 5,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 6,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => -9,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 7,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 8,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 0,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 9,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 0,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 10,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 10,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 11,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 0,
  'region' => 'dashboard_inactive',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 12,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'seven',
  'status' => 1,
  'weight' => -10,
  'region' => 'dashboard_inactive',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 13,
  'module' => 'comment',
  'delta' => 'recent',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 14,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 15,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 16,
  'module' => 'shortcut',
  'delta' => 'shortcuts',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 17,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 18,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 19,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 20,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 21,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 22,
  'module' => 'comment',
  'delta' => 'recent',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 0,
  'region' => 'dashboard_inactive',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 23,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 24,
  'module' => 'shortcut',
  'delta' => 'shortcuts',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 25,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 26,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 27,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 28,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 29,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 30,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 0,
  'region' => 'dashboard_inactive',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 31,
  'module' => 'comment',
  'delta' => 'recent',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 32,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 33,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 7,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 34,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 35,
  'module' => 'shortcut',
  'delta' => 'shortcuts',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 6,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 36,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'fieldglass',
  'status' => 1,
  'weight' => 0,
  'region' => 'header_second',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 37,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'fieldglass',
  'status' => 1,
  'weight' => -10,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 38,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'fieldglass',
  'status' => 1,
  'weight' => -17,
  'region' => 'branding',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 39,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 40,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 41,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 42,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 8,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 43,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 44,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 11,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 45,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 12,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 46,
  'module' => 'faq',
  'delta' => 'faq_categories',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 47,
  'module' => 'faq',
  'delta' => 'faq_categories',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 48,
  'module' => 'faq',
  'delta' => 'faq_categories',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 49,
  'module' => 'views',
  'delta' => 'faq-faq_recent',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 50,
  'module' => 'views',
  'delta' => 'faq-faq_random',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 51,
  'module' => 'views',
  'delta' => 'faq-faq_recent',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 52,
  'module' => 'views',
  'delta' => 'faq-faq_random',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 53,
  'module' => 'views',
  'delta' => 'faq-faq_recent',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 54,
  'module' => 'views',
  'delta' => 'faq-faq_random',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 55,
  'module' => 'views',
  'delta' => 'agenda-block_1',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 56,
  'module' => 'views',
  'delta' => 'agenda-block_2',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => -7,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'agenda',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 57,
  'module' => 'views',
  'delta' => 'agenda-block_2',
  'theme' => 'fieldglass',
  'status' => 1,
  'weight' => -11,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'agenda',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 58,
  'module' => 'views',
  'delta' => 'agenda-block_2',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'agenda',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 59,
  'module' => 'views',
  'delta' => 'agenda-block_1',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 9,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 60,
  'module' => 'views',
  'delta' => 'agenda-block_1',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 61,
  'module' => 'views',
  'delta' => 'frontpage_slideshow-block',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => -16,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 62,
  'module' => 'views',
  'delta' => 'summit_features-block',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => -13,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 63,
  'module' => 'views',
  'delta' => 'learn_more-block',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'triptych_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 64,
  'module' => 'views',
  'delta' => 'travel_tips-block',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => -8,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'travel',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 65,
  'module' => 'views',
  'delta' => 'quotes-block',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => -9,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'why_attend',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 66,
  'module' => 'views',
  'delta' => 'quotes-block_1',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => -12,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 67,
  'module' => 'views',
  'delta' => 'frontpage_slideshow-block',
  'theme' => 'fieldglass',
  'status' => 1,
  'weight' => -9,
  'region' => 'menu',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 68,
  'module' => 'views',
  'delta' => 'summit_features-block',
  'theme' => 'fieldglass',
  'status' => 1,
  'weight' => -16,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 69,
  'module' => 'views',
  'delta' => 'learn_more-block',
  'theme' => 'fieldglass',
  'status' => 1,
  'weight' => -4,
  'region' => 'footer_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 70,
  'module' => 'views',
  'delta' => 'travel_tips-block',
  'theme' => 'fieldglass',
  'status' => 1,
  'weight' => -12,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'travel',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 71,
  'module' => 'views',
  'delta' => 'quotes-block',
  'theme' => 'fieldglass',
  'status' => 1,
  'weight' => -13,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'why_attend',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 72,
  'module' => 'views',
  'delta' => 'quotes-block_1',
  'theme' => 'fieldglass',
  'status' => 1,
  'weight' => -15,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 73,
  'module' => 'views',
  'delta' => 'frontpage_slideshow-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 74,
  'module' => 'views',
  'delta' => 'summit_features-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 75,
  'module' => 'views',
  'delta' => 'learn_more-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 76,
  'module' => 'views',
  'delta' => 'travel_tips-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'travel',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 77,
  'module' => 'views',
  'delta' => 'quotes-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'why_attend',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 78,
  'module' => 'views',
  'delta' => 'quotes-block_1',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 79,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'bartik',
  'status' => 1,
  'weight' => -15,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => 'The 2016 SAP Fieldglass Best Practices Summit',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 80,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'fieldglass',
  'status' => 1,
  'weight' => -17,
  'region' => 'header_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => 'The 2016 SAP Fieldglass Best Practices Summit',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 81,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => 'The 2016 SAP Fieldglass Best Practices Summit',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 82,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'bartik',
  'status' => 1,
  'weight' => -14,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => 'Registration Coming Soon!',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 83,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'fieldglass',
  'status' => 1,
  'weight' => 4,
  'region' => 'user_second',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => 'Registration Coming Soon!',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 84,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => 'Registration Coming Soon!',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 85,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'triptych_middle',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Best Practices Summit Videos on Fuse',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 86,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'fieldglass',
  'status' => 1,
  'weight' => -3,
  'region' => 'footer_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Best Practices Summit Videos on Fuse',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 87,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Best Practices Summit Videos on Fuse',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 88,
  'module' => 'block',
  'delta' => 4,
  'theme' => 'bartik',
  'status' => 1,
  'weight' => -17,
  'region' => 'sidebar_second',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'agenda',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 89,
  'module' => 'block',
  'delta' => 4,
  'theme' => 'fieldglass',
  'status' => 1,
  'weight' => -8,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'agenda',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 90,
  'module' => 'block',
  'delta' => 4,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'agenda',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 91,
  'module' => 'webform',
  'delta' => 'client-block-45',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 92,
  'module' => 'block',
  'delta' => 5,
  'theme' => 'bartik',
  'status' => 1,
  'weight' => -16,
  'region' => 'sidebar_second',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<!--agenda-->',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 93,
  'module' => 'block',
  'delta' => 5,
  'theme' => 'fieldglass',
  'status' => 1,
  'weight' => -7,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<!--agenda-->',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 94,
  'module' => 'block',
  'delta' => 5,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<!--agenda-->',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 95,
  'module' => 'block',
  'delta' => 6,
  'theme' => 'bartik',
  'status' => 1,
  'weight' => -15,
  'region' => 'sidebar_second',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'travel',
  'title' => 'Loews Chicago Hotel ',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 96,
  'module' => 'block',
  'delta' => 6,
  'theme' => 'fieldglass',
  'status' => 1,
  'weight' => -6,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'travel',
  'title' => 'Loews Chicago Hotel ',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 97,
  'module' => 'block',
  'delta' => 6,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'travel',
  'title' => 'Loews Chicago Hotel ',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 98,
  'module' => 'block',
  'delta' => 7,
  'theme' => 'bartik',
  'status' => 1,
  'weight' => -14,
  'region' => 'sidebar_second',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'travel',
  'title' => 'Helpful Links',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 99,
  'module' => 'block',
  'delta' => 7,
  'theme' => 'fieldglass',
  'status' => 1,
  'weight' => -5,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'travel',
  'title' => 'Helpful Links',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 100,
  'module' => 'block',
  'delta' => 7,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'travel',
  'title' => 'Helpful Links',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 101,
  'module' => 'webform',
  'delta' => 'client-block-45',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 102,
  'module' => 'webform',
  'delta' => 'client-block-45',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 103,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'header',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 104,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'fieldglass',
  'status' => 1,
  'weight' => -15,
  'region' => 'user_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 105,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 106,
  'module' => 'views',
  'delta' => 'photos_of_past_summits-block_1',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => -11,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 107,
  'module' => 'views',
  'delta' => 'photos_of_past_summits-block_1',
  'theme' => 'fieldglass',
  'status' => 1,
  'weight' => -14,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 108,
  'module' => 'views',
  'delta' => 'photos_of_past_summits-block_1',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 109,
  'module' => 'block',
  'delta' => 9,
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'triptych_last',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Drop us a note!',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 110,
  'module' => 'block',
  'delta' => 9,
  'theme' => 'fieldglass',
  'status' => 1,
  'weight' => -2,
  'region' => 'footer_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Drop us a note!',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 111,
  'module' => 'block',
  'delta' => 9,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Drop us a note!',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 112,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => -21,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => 'The 2016 SAP Fieldglass Best Practices Summit',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 113,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => -17,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => 'Registration Coming Soon!',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 114,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'fieldglass_summit',
  'status' => 1,
  'weight' => -3,
  'region' => 'postscript_second',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Best Practices Summit Videos on Fuse',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 115,
  'module' => 'block',
  'delta' => 4,
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => -14,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'agenda',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 116,
  'module' => 'block',
  'delta' => 5,
  'theme' => 'fieldglass_summit',
  'status' => 1,
  'weight' => -18,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<!--agenda-->',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 117,
  'module' => 'block',
  'delta' => 6,
  'theme' => 'fieldglass_summit',
  'status' => 1,
  'weight' => -16,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'travel',
  'title' => 'Loews Chicago Hotel ',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 118,
  'module' => 'block',
  'delta' => 7,
  'theme' => 'fieldglass_summit',
  'status' => 1,
  'weight' => -15,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'travel',
  'title' => 'Helpful Links',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 119,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'fieldglass_summit',
  'status' => 1,
  'weight' => -20,
  'region' => 'user_second',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 120,
  'module' => 'block',
  'delta' => 9,
  'theme' => 'fieldglass_summit',
  'status' => 1,
  'weight' => -2,
  'region' => 'postscript_third',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Drop us a note!',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 121,
  'module' => 'comment',
  'delta' => 'recent',
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => 2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 122,
  'module' => 'faq',
  'delta' => 'faq_categories',
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 123,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => 3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 124,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => 7,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 125,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => 5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 126,
  'module' => 'shortcut',
  'delta' => 'shortcuts',
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => 6,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 127,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => -16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 128,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'fieldglass_summit',
  'status' => 1,
  'weight' => -19,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 129,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'fieldglass_summit',
  'status' => 1,
  'weight' => -17,
  'region' => 'menu_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 130,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 131,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => 1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 132,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => 10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 133,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => 8,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 134,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 135,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => 11,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 136,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => 12,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 137,
  'module' => 'views',
  'delta' => 'agenda-block_1',
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => 9,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 138,
  'module' => 'views',
  'delta' => 'agenda-block_2',
  'theme' => 'fieldglass_summit',
  'status' => 1,
  'weight' => -20,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'agenda',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 139,
  'module' => 'views',
  'delta' => 'faq-faq_random',
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 140,
  'module' => 'views',
  'delta' => 'faq-faq_recent',
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 141,
  'module' => 'views',
  'delta' => 'frontpage_slideshow-block',
  'theme' => 'fieldglass_summit',
  'status' => 1,
  'weight' => -21,
  'region' => 'menu_second',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 142,
  'module' => 'views',
  'delta' => 'learn_more-block',
  'theme' => 'fieldglass_summit',
  'status' => 1,
  'weight' => -20,
  'region' => 'postscript_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 143,
  'module' => 'views',
  'delta' => 'photos_of_past_summits-block_1',
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => -16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 144,
  'module' => 'views',
  'delta' => 'quotes-block',
  'theme' => 'fieldglass_summit',
  'status' => 1,
  'weight' => -17,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'why_attend',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 145,
  'module' => 'views',
  'delta' => 'quotes-block_1',
  'theme' => 'fieldglass_summit',
  'status' => 1,
  'weight' => -21,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 146,
  'module' => 'views',
  'delta' => 'summit_features-block',
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => -18,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 147,
  'module' => 'views',
  'delta' => 'travel_tips-block',
  'theme' => 'fieldglass_summit',
  'status' => 1,
  'weight' => -18,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'travel',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 148,
  'module' => 'webform',
  'delta' => 'client-block-45',
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => 10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 149,
  'module' => 'crumbs',
  'delta' => 'breadcrumb',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 150,
  'module' => 'crumbs',
  'delta' => 'breadcrumb',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 151,
  'module' => 'crumbs',
  'delta' => 'breadcrumb',
  'theme' => 'fieldglass_summit',
  'status' => 1,
  'weight' => -17,
  'region' => 'menu_second',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 152,
  'module' => 'crumbs',
  'delta' => 'breadcrumb',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 153,
  'module' => 'views',
  'delta' => 'video-block',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 154,
  'module' => 'views',
  'delta' => 'video-block',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 155,
  'module' => 'views',
  'delta' => 'video-block',
  'theme' => 'fieldglass_summit',
  'status' => 1,
  'weight' => -19,
  'region' => 'postscript_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 156,
  'module' => 'views',
  'delta' => 'video-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 157,
  'module' => 'views',
  'delta' => 'video-block_1',
  'theme' => 'fieldglass_summit',
  'status' => 1,
  'weight' => -19,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<!--agenda-->',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 158,
  'module' => 'views',
  'delta' => 'video-block_2',
  'theme' => 'fieldglass_summit',
  'status' => 1,
  'weight' => -17,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'travel',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 159,
  'module' => 'views',
  'delta' => 'video-block_1',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<!--agenda-->',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 160,
  'module' => 'views',
  'delta' => 'video-block_1',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<!--agenda-->',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 161,
  'module' => 'views',
  'delta' => 'video-block_1',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<!--agenda-->',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 162,
  'module' => 'views',
  'delta' => 'video-block_2',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'travel',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 163,
  'module' => 'views',
  'delta' => 'video-block_2',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'travel',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 164,
  'module' => 'views',
  'delta' => 'video-block_2',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'travel',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 165,
  'module' => 'logintoboggan',
  'delta' => 'logintoboggan_logged_in',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 166,
  'module' => 'logintoboggan',
  'delta' => 'logintoboggan_logged_in',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 167,
  'module' => 'logintoboggan',
  'delta' => 'logintoboggan_logged_in',
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 168,
  'module' => 'logintoboggan',
  'delta' => 'logintoboggan_logged_in',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 169,
  'module' => 'block',
  'delta' => 10,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'voc_2015',
  'title' => 'Register Here!',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 170,
  'module' => 'block',
  'delta' => 10,
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'voc_2015',
  'title' => 'Register Here!',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 171,
  'module' => 'block',
  'delta' => 10,
  'theme' => 'fieldglass_summit',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'voc_2015',
  'title' => 'Register Here!',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 172,
  'module' => 'block',
  'delta' => 10,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'voc_2015',
  'title' => 'Register Here!',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 173,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 174,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 175,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'fieldglass_summit',
  'status' => 1,
  'weight' => -20,
  'region' => 'menu_second',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 176,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 177,
  'module' => 'block',
  'delta' => 12,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 178,
  'module' => 'block',
  'delta' => 12,
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 179,
  'module' => 'block',
  'delta' => 12,
  'theme' => 'fieldglass_summit',
  'status' => 1,
  'weight' => -18,
  'region' => 'menu_second',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 180,
  'module' => 'block',
  'delta' => 12,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 181,
  'module' => 'block',
  'delta' => 13,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 182,
  'module' => 'block',
  'delta' => 13,
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 183,
  'module' => 'block',
  'delta' => 13,
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => -18,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 184,
  'module' => 'block',
  'delta' => 13,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 185,
  'module' => 'block',
  'delta' => 14,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'company-profile2
company-profile',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 186,
  'module' => 'block',
  'delta' => 14,
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'company-profile2
company-profile',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 187,
  'module' => 'block',
  'delta' => 14,
  'theme' => 'fieldglass_summit',
  'status' => 1,
  'weight' => -22,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'company-profile2
company-profile',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 188,
  'module' => 'block',
  'delta' => 14,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'company-profile2
company-profile',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 189,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 190,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 191,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'fieldglass_summit',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 192,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 193,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => -21,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => 'The 2016 SAP Fieldglass Best Practices Summit',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 194,
  'module' => 'block',
  'delta' => 10,
  'theme' => 'summit_wide',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'voc_2015',
  'title' => 'Register Here!',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 195,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => -18,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 196,
  'module' => 'block',
  'delta' => 12,
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => -15,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 197,
  'module' => 'block',
  'delta' => 13,
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => -18,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 198,
  'module' => 'block',
  'delta' => 14,
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => -26,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'company-profile2
company-profile',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 199,
  'module' => 'block',
  'delta' => 2,
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => -17,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => 'Registration Coming Soon!',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 200,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'summit_wide',
  'status' => 1,
  'weight' => -3,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Best Practices Summit Videos on Fuse',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 201,
  'module' => 'block',
  'delta' => 4,
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => -14,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'agenda',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 202,
  'module' => 'block',
  'delta' => 5,
  'theme' => 'summit_wide',
  'status' => 1,
  'weight' => -18,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<!--agenda-->',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 203,
  'module' => 'block',
  'delta' => 6,
  'theme' => 'summit_wide',
  'status' => 1,
  'weight' => -16,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'travel',
  'title' => 'Loews Chicago Hotel ',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 204,
  'module' => 'block',
  'delta' => 7,
  'theme' => 'summit_wide',
  'status' => 1,
  'weight' => -15,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'travel',
  'title' => 'Helpful Links',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 205,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'summit_wide',
  'status' => 1,
  'weight' => -20,
  'region' => 'menu_second',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 206,
  'module' => 'block',
  'delta' => 9,
  'theme' => 'summit_wide',
  'status' => 1,
  'weight' => -2,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => 'Drop us a note!',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 207,
  'module' => 'comment',
  'delta' => 'recent',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => 2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 208,
  'module' => 'crumbs',
  'delta' => 'breadcrumb',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => -17,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 209,
  'module' => 'faq',
  'delta' => 'faq_categories',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 210,
  'module' => 'logintoboggan',
  'delta' => 'logintoboggan_logged_in',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 211,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 212,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => 3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 213,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => 7,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 214,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => 5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 215,
  'module' => 'shortcut',
  'delta' => 'shortcuts',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => 6,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 216,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => -16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 217,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'summit_wide',
  'status' => 1,
  'weight' => -25,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 218,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => -17,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 219,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 220,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => 1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 221,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => 10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 222,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => 8,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 223,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 224,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => 11,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 225,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => 12,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 226,
  'module' => 'views',
  'delta' => 'agenda-block_1',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => 9,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 227,
  'module' => 'views',
  'delta' => 'agenda-block_2',
  'theme' => 'summit_wide',
  'status' => 1,
  'weight' => -26,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'agenda',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 228,
  'module' => 'views',
  'delta' => 'faq-faq_random',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 229,
  'module' => 'views',
  'delta' => 'faq-faq_recent',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 230,
  'module' => 'views',
  'delta' => 'frontpage_slideshow-block',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => -21,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 231,
  'module' => 'views',
  'delta' => 'learn_more-block',
  'theme' => 'summit_wide',
  'status' => 1,
  'weight' => -20,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 232,
  'module' => 'views',
  'delta' => 'photos_of_past_summits-block_1',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => -13,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 233,
  'module' => 'views',
  'delta' => 'quotes-block',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => -14,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'why_attend',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 234,
  'module' => 'views',
  'delta' => 'quotes-block_1',
  'theme' => 'summit_wide',
  'status' => 1,
  'weight' => -27,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 235,
  'module' => 'views',
  'delta' => 'summit_features-block',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => -18,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 236,
  'module' => 'views',
  'delta' => 'travel_tips-block',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => -16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'travel',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 237,
  'module' => 'views',
  'delta' => 'video-block',
  'theme' => 'summit_wide',
  'status' => 1,
  'weight' => -19,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 238,
  'module' => 'views',
  'delta' => 'video-block_1',
  'theme' => 'summit_wide',
  'status' => 1,
  'weight' => -19,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<!--agenda-->',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 239,
  'module' => 'views',
  'delta' => 'video-block_2',
  'theme' => 'summit_wide',
  'status' => 1,
  'weight' => -17,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'travel',
  'title' => '<none>',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 240,
  'module' => 'webform',
  'delta' => 'client-block-45',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => 10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 241,
  'module' => 'block',
  'delta' => 15,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 242,
  'module' => 'block',
  'delta' => 15,
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 243,
  'module' => 'block',
  'delta' => 15,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 244,
  'module' => 'block',
  'delta' => 15,
  'theme' => 'summit_wide',
  'status' => 1,
  'weight' => -29,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 245,
  'module' => 'views',
  'delta' => 'speakers-block',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 246,
  'module' => 'views',
  'delta' => 'speakers-block',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 247,
  'module' => 'views',
  'delta' => 'speakers-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 248,
  'module' => 'views',
  'delta' => 'speakers-block',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => -28,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 249,
  'module' => 'views',
  'delta' => 'speakers2-block',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => -22,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 250,
  'module' => 'views',
  'delta' => 'speakers2-block',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 251,
  'module' => 'views',
  'delta' => 'speakers2-block',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 252,
  'module' => 'views',
  'delta' => 'speakers2-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 253,
  'module' => 'block',
  'delta' => 16,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 254,
  'module' => 'block',
  'delta' => 16,
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 255,
  'module' => 'block',
  'delta' => 16,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 256,
  'module' => 'block',
  'delta' => 16,
  'theme' => 'summit_wide',
  'status' => 1,
  'weight' => -23,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 257,
  'module' => 'block',
  'delta' => 17,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 258,
  'module' => 'block',
  'delta' => 17,
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 259,
  'module' => 'block',
  'delta' => 17,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 260,
  'module' => 'block',
  'delta' => 17,
  'theme' => 'summit_wide',
  'status' => 1,
  'weight' => -22,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 261,
  'module' => 'block',
  'delta' => 18,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 262,
  'module' => 'block',
  'delta' => 18,
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 263,
  'module' => 'block',
  'delta' => 18,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 264,
  'module' => 'block',
  'delta' => 18,
  'theme' => 'summit_wide',
  'status' => 1,
  'weight' => -21,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 265,
  'module' => 'block',
  'delta' => 19,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 266,
  'module' => 'block',
  'delta' => 19,
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 267,
  'module' => 'block',
  'delta' => 19,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 268,
  'module' => 'block',
  'delta' => 19,
  'theme' => 'summit_wide',
  'status' => 1,
  'weight' => 0,
  'region' => 'footer_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 269,
  'module' => 'block',
  'delta' => 20,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 270,
  'module' => 'block',
  'delta' => 20,
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 271,
  'module' => 'block',
  'delta' => 20,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 272,
  'module' => 'block',
  'delta' => 20,
  'theme' => 'summit_wide',
  'status' => 1,
  'weight' => 0,
  'region' => 'footer_second',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 273,
  'module' => 'block',
  'delta' => 21,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 274,
  'module' => 'block',
  'delta' => 21,
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 275,
  'module' => 'block',
  'delta' => 21,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 276,
  'module' => 'block',
  'delta' => 21,
  'theme' => 'summit_wide',
  'status' => 1,
  'weight' => 0,
  'region' => 'postscript_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 277,
  'module' => 'block',
  'delta' => 22,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 278,
  'module' => 'block',
  'delta' => 22,
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 279,
  'module' => 'block',
  'delta' => 22,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 280,
  'module' => 'block',
  'delta' => 22,
  'theme' => 'summit_wide',
  'status' => 1,
  'weight' => 0,
  'region' => 'menu_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 281,
  'module' => 'block',
  'delta' => 23,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => '',
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'company-profile',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 282,
  'module' => 'block',
  'delta' => 23,
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => '',
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'company-profile',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 283,
  'module' => 'block',
  'delta' => 23,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => '',
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'company-profile',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 284,
  'module' => 'block',
  'delta' => 23,
  'theme' => 'summit_wide',
  'status' => 1,
  'weight' => -20,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => 'company-profile',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 285,
  'module' => 'block',
  'delta' => 24,
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 286,
  'module' => 'block',
  'delta' => 24,
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 287,
  'module' => 'block',
  'delta' => 24,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 288,
  'module' => 'block',
  'delta' => 24,
  'theme' => 'summit_wide',
  'status' => 1,
  'weight' => -24,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
);
  $export['block'][] = array(
  'bid' => 289,
  'module' => 'diff',
  'delta' => 'inline',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 290,
  'module' => 'diff',
  'delta' => 'inline',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 291,
  'module' => 'diff',
  'delta' => 'inline',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 292,
  'module' => 'diff',
  'delta' => 'inline',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
);
  $export['block'][] = array(
  'bid' => 293,
  'module' => 'boxes',
  'delta' => 'boxes_add__simple',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 294,
  'module' => 'boxes',
  'delta' => 'boxes_add__simple',
  'theme' => 'fieldglass',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 295,
  'module' => 'boxes',
  'delta' => 'boxes_add__simple',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block'][] = array(
  'bid' => 296,
  'module' => 'boxes',
  'delta' => 'boxes_add__simple',
  'theme' => 'summit_wide',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -2,
);
  $export['block_custom'][] = array(
  'bid' => 1,
  'body' => '<p style="line-height:1.7em;"><img alt="Fieldglass Best Practices Summit" src="/sites/default/files/images/img_1.jpg" style="width: 220px; height: 130px; float: left; margin-top:6px;" />Attend this year&#39;s Best Practices Summit to share ideas with your peers and learn from other&#39;s experiences. The SAP Fieldglass platform has been fine-tuned over the years with input and direction from our valued customers. We hope you will join the largest VMS user community, featuring many of the world&#39;s premier organizations, for a couple days of knowledge sharing at this complimentary event. &nbsp;</p>',
  'info' => 'The 2016 SAP Fieldglass Best Practices Summit',
  'format' => 'wysiwyg',
);
  $export['block_custom'][] = array(
  'bid' => 2,
  'body' => '<p class="wordbubble">Stay tuned for registration.</p>',
  'info' => 'Registration Coming Soon!',
  'format' => 'wysiwyg',
);
  $export['block_custom'][] = array(
  'bid' => 3,
  'body' => '<p class="subhead">Take a look back at videos from last year&#39;s event!</p>
<ul>

    <li><a href="https://jam4.sapjam.com/profile/wU6xqFSqRCSvNSuFE0Px49/documents/ynfMCeM5V95iXfPKWMRpY4" target="_blank">Jai Shekhawat Keynote</a></li>

    <li><a href="https://jam4.sapjam.com/profile/wU6xqFSqRCSvNSuFE0Px49/documents/KlFCMiL3hXXtvPl1y5GgVw" target="_blank">2015 Highlight Video</a></li>

    <li><a href="https://jam4.sapjam.com/profile/wU6xqFSqRCSvNSuFE0Px49/documents/pgxobBJKwnAjugOLSalalK" target="_blank">Fieldglass Vision and Strategy</a></li>

    <li><a href="https://jam4.sapjam.com/profile/wU6xqFSqRCSvNSuFE0Px49/documents/qejWXmZGMyGWo96ivehrOJ" target="_blank">SOW Building a Business Case</a></li>

</ul>',
  'info' => 'Best Practices Summit Videos on Fuse',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 4,
  'body' => '<p><img alt="" src="/sites/default/files/images/call_presenter.png" style="border: 1px solid rgb(204, 204, 204);" /></p><p>Contact Anna Burke(the link on the legacy site links to the agenda page)</p><p>&nbsp;</p>',
  'info' => 'Contact Anna Burke',
  'format' => 'wysiwyg',
);
  $export['block_custom'][] = array(
  'bid' => 5,
  'body' => '<h2 class="block-title" style="margin-top:20px;">Concurrent Sessions​</h2><div class="classname" style="-moz-border-radius: 4px;-webkit-border-radius: 4px;border-radius: 4px;-moz-box-shadow: 0px 0px 4px #000000;-webkit-box-shadow: 0px 0px 4px #000000;box-shadow: 0px 0px 4px #000000; padding: 4px; background: #fefcea;"><p><em>The concurrent sessions at this year&rsquo;s Best Practices Summit aim to foster an environment for engaging discussions. During the registration process you will have the opportunity to select the sessions you are most interested in attending.</em></p></div><h3 style="margin-top: 4px; margin-bottom: 6px;">Topics will include:</h3><ul><li>Total Talent Management</li><li>User Experience Enhancements&nbsp;</li><li>How to Effectively Manage and Optimize Your Supplier Base</li><li>SOW: Building the Business Case&nbsp;</li><li>SOW: Building Momentum and Finding Value</li><li>Worker Profile Management</li><li>Understanding Local Legislation for Global Expansion</li><li>Optimizing the User Experience</li><li>Demonstrating the Value of Your Contingent Workforce Program</li><li>The Benefits of a VMS During Acquisition and Split-Off</li><li>Program Design vs. Reality, An Exercise in Course Correction</li><li>MSP Strategy and Strategic Alliance</li></ul><p><a href="mailto:nicole.mohovich@sap.com"><img alt="" src="http://www.fieldglass.com/sites/default/files/images/images/2015_summit-side-banners_speakers.jpeg" style="width: 200px; height: 260px; border: 0;" /></a></p>
<style type="text/css">
#block-block-5 li {
  border-bottom-style: outset;
  border-bottom-width: thin;
}</style>
',
  'info' => 'Concurrent Sessions',
  'format' => 'wysiwyg',
);
  $export['block_custom'][] = array(
  'bid' => 6,
  'body' => '<p><img alt="" src="http://www.fieldglass.com/sites/default/files/images/images/2015_summit-side-banners_hotel.png" style="width: 200px; height: 260px;" /></p><p>&nbsp;</p>',
  'info' => 'Loews Chicago Hotel',
  'format' => 'wysiwyg',
);
  $export['block_custom'][] = array(
  'bid' => 7,
  'body' => '<ul><li><a href="https://aws.passkey.com/event/13495614/owner/11931919/home">Loews Chicago Hotel&nbsp;</a></li><li><a href="http://www.transitchicago.com/">Chicago Transit Authority</a></li><li><a href="http://www.enjoyillinois.com/">EnjoyIllinois.com</a></li><li><a href="http://www.gochicago.com/">GoChicago.com</a></li><li><a href="http://www.enjoyillinois.com/TravelGuides">Illinois Travel Guide (PDF)</a></li><li><a href="http://yellowcabchicago.com/">Yellow Cab</a></li></ul>',
  'info' => 'Helpful Links',
  'format' => 'wysiwyg',
);
  $export['block_custom'][] = array(
  'bid' => 8,
  'body' => '<div class="site_dropdown_cont">
    <div class="site_dropdown">
        <label for="trigger" class="dropdown_arrow">Chicago</label>
        <input type="checkbox" id="trigger" name="trigger"/>
        <ul class="site_select">
            <li><a href="/">CHICAGO</a></li>
            <li><a href="http://emeasummit.fieldglass.com">EMEA</a></li>
        </ul>
    </div>
    <div class="divider"><img src="sites/default/files/divider_line.png" /></div>
    <div class="register_button">
        <a class="register-button" href="https://www.surveymonkey.com/r/CJKTNT3 " target="_blank">Register</a>
    </div>
</div>
<div id="mobile-header">
    <a id="responsive-menu-button" href="#sidr-main"><span></span><span></span><span></span></a>
</div>

<div class="region-menu-inner">
    <ul>
        <li><a href="why_attend">Why Attend?</a></li>
        <li><a href="travel">Travel + Accomodations</a></li>
        <li><a href="faq">FAQ</a></li>
        <li><a href="agenda">Agenda</a></li>
        <li><a href="company-profile">Attendees</a></li>
        <li><a href="http://summit.localhost/emea/">EMEA</a></li>
        <li><a href="https://www.surveymonkey.com/r/CJKTNT3">Register</a></li>

    </ul>
</div>
<link rel="stylesheet" type="text/css" href="sites/all/libraries/sidr-package-1.2.1/stylesheets/jquery.sidr.dark.css">
<link rel="stylesheet" type="text/css" href="http://netdna.bootstrapcdn.com/bootstrap/3.1.1/css/bootstrap.min.css">

<script>
    jQuery(document).ready(function() {
        jQuery(function() {
            jQuery(\'#responsive-menu-button\').sidr({
                name: \'sidr-main\',
                source: \'.region-menu-inner\',
                side: \'right\'
            });
        });
    });
</script>',
  'info' => 'Register Today! (header)',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 9,
  'body' => '



<div class="responsive_form" >
 
  <script src="//app-sjl.marketo.com/js/forms2/js/forms2.min.js"></script>
<form id="mktoForm_1573"></form>
<script>MktoForms2.loadForm("//app-sjl.marketo.com", "655-SDM-567", 1573);</script>
   <script>
      MktoForms2.whenReady(function (form){
      //Add an onSuccess handler
        form.onSuccess(function(values, followUpUrl){
         //get the form\'s jQuery element and hide it
         form.getFormElem().hide();
         document.getElementById(\'confirmform\').style.visibility = \'visible\';
         //return false to prevent the submission handler from taking the lead to the follow up url.
         return false;
      });
      });
   </script>
   <div id="confirmform" style="visibility: hidden; background-color: lightgray;"><span style="font-family:whitneybold"><em>Thank You for Your Interest!</em></span><br /><br /></div>
</div>
<script type="text/javascript">
   (function() {
     var didInit = false;
     function initMunchkin() {
       if(didInit === false) {
         didInit = true;
         Munchkin.init(\'655-SDM-567\');
       }
     }
     var s = document.createElement(\'script\');
     s.type = \'text/javascript\';
     s.async = true;
     s.src = \'//munchkin.marketo.net/munchkin.js\';
     s.onreadystatechange = function() {
       if (this.readyState == \'complete\' || this.readyState == \'loaded\') {
         initMunchkin();
       }
     };
     s.onload = initMunchkin;
     document.getElementsByTagName(\'head\')[0].appendChild(s);
   })();
</script>',
  'info' => 'drop us a note',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 10,
  'body' => '<!-- This is the form area -->


<script src="//app-sjl.marketo.com/js/forms2/js/forms2.min.js"></script>
<form id="mktoForm_1310"></form>
<script>MktoForms2.loadForm("//app-sjl.marketo.com", "655-SDM-567", 1310);</script>
<style>
h2.block-title {
  margin-left: 9px;
}
section#block-block-10 {
  margin-top: 256px;
  margin-left: -80px;
}
h1#page-title {
  display: none;
}
@media all and (max-width:640px) and (min-width: 320px) {
 
section#block-block-10 {
  margin-top: 0px;
  margin-left: 0px;

  }
}
</style>',
  'info' => 'A place to place Marketo forms',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 11,
  'body' => '<div class="countdown">
<div class="countdown-content">
<h2>Countdown to the Summit!</h2>

<script src="http://summit.fieldglass.com/sites/all/libraries/countdown_v5.0/countdown.js"></script>

<div class="clock">
<script>
var myCountdown1 = new Countdown({
                         year: 2016,
                         month 	: 6,     // (optional) The target date\'s month
                         day   	: 15,     // (optional) The target date\'s day
                         hour  	: 5,     // (optional) The target date\'s hour 
                         ampm  	: "pm",	 // (optional) Is the hour refering to AM (early/day) or PM (late/night)?
                         minute	: 0,          // (optional) The target date\'s minutes
                         second	: 0,          // (optional) The target date\'s seconds
                         offset	: 0,    // (optional) Number of hours to offset. Can be positive or negative.
                         rangeHi	: "month"	

});
jQuery( document ).ready(function() {
  // Handler for .ready() called.
jQuery("div#Stage_jbeeb_3").css("left","270px");
jQuery("div#Container_jbeeb_6").css("display","none");
jQuery("div#TextBox_jbeeb_9").css("display","none");
});


</script>
</div>
</div>
</div>
<div class="summit_text">Join us for the SAP Fieldglass 2016 Best Practices Summit. This complimentary event brings together our user community with our executives and industry experts for three days of knowledge sharing, networking and more.</div>
<style>
.summit_text {
    margin-bottom: 50px;
    font-size: 17px;
    text-align: center;
}
.countdown {position:relative;   margin: 50px 0px 50px;}
.countdown-content {text-align:center;}
h2 {font-size:42px;   font-family: BentonSans,din-condensed-web, sans-serif;}
#Stage_jbeeb_3 {text-align:center}
</style>
',
  'info' => 'countdown to the summit',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 12,
  'body' => '<div class="box_container">
    <div class="grid-4 register">
        <div class="img_cont"><img width="190px" src="http://summit.fieldglass.com/sites/default/files/images/Networking.jpg" /></div>
        <h3>Who\'s Coming?</h3>
        <p>Take a look at the other organizations attending this year’s Best Practices Summit and learn helpful information about their programs.</p>
        <p class="a_button"><a href="http://summit.fieldglass.com/company-profile" >Access Profiles</a></p>
    </div>
    <div class="grid-4 watch">
        <div class="img_cont"><img width="190px" src="http://summit.fieldglass.com/sites/default/files/images/watchnow.jpg" /></div>
        <h3>Watch Now!</h3>
        <p></p>Sign up for our online user community to access videos from our past Summits and to connect with your peers.
        <p class="a_button"><a href="https://jam4.sapjam.com/groups/about_page/UtYKF62x1zetW6jduXqBFD" >Join FUSE</a></p>
    </div>
    <div class="grid-4 agenda">
        <div class="img_cont"><img width="190px" src="http://summit.fieldglass.com/sites/default/files/images/agenda.jpg" /></div>
        <h3>Check Out the Agenda!</h3>
        <p>Get the details on the keynotes, concurrent sessions, social events and more.</p>
        <p class="a_button"><a href="agenda" >Visit Agenda</a></p>
    </div>
</div>

<style>
    .grid-4 {
        max-width: 290px;
    }
    .box_container .grid-4 img {

        margin-bottom: 15px;
    }
.watch .a_button {
    margin-top: 47px;
}

.agenda .a_button {
    margin-top: 69px;
}
    .box_container h3{
        font-family: BentonSans;
        font-size: 18px;
        text-align: center;
        margin-bottom: 15px;
    }
    .box_container p {
        font-family: BentonSans;
        font-size: 14px;
        text-align: center;
        margin: 25px;
    }

    .box_container a{
        background-color: #008fd3;
        color: white;
        padding: 7px 16px 6px 15px;
        text-align: center;
        font-family: BentonSans;

    }
    .img_cont {
        text-align: center;
    }
</style>',
  'info' => 'set of 3 boxes for HP',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 13,
  'body' => '
<link rel="stylesheet" href="http://netdna.bootstrapcdn.com/bootstrap/3.1.1/css/bootstrap.min.css">
<link rel="stylesheet" type="text/css" href="http://summit.fieldglass.com/sites/all/libraries/circular-countdown/demo/css/demo.css">
<div class="countdown countdown-container container">
    <div class="clock row">
        <div class="clock-item clock-days countdown-time-value col-sm-6 col-md-3">
            <div class="wrap">
                <div class="inner">
                    <div id="canvas-days" class="clock-canvas"></div>
                    <div class="text">
                        <p class="val">0</p>
                        <p class="type-days type-time">DAYS</p>
                    </div>
                    <!-- /.text -->
                </div>
                <!-- /.inner -->
            </div>
            <!-- /.wrap -->
        </div>
        <!-- /.clock-item -->
        <div class="clock-item clock-hours countdown-time-value col-sm-6 col-md-3">
            <div class="wrap">
                <div class="inner">
                    <div id="canvas-hours" class="clock-canvas"></div>
                    <div class="text">
                        <p class="val">0</p>
                        <p class="type-hours type-time">HOURS</p>
                    </div>
                    <!-- /.text -->
                </div>
                <!-- /.inner -->
            </div>
            <!-- /.wrap -->
        </div>
        <!-- /.clock-item -->
        <div class="clock-item clock-minutes countdown-time-value col-sm-6 col-md-3">
            <div class="wrap">
                <div class="inner">
                    <div id="canvas-minutes" class="clock-canvas"></div>
                    <div class="text">
                        <p class="val">0</p>
                        <p class="type-minutes type-time">MINUTES</p>
                    </div>
                    <!-- /.text -->
                </div>
                <!-- /.inner -->
            </div>
            <!-- /.wrap -->
        </div>
        <!-- /.clock-item -->
        <div class="clock-item clock-seconds countdown-time-value col-sm-6 col-md-3">
            <div class="wrap">
                <div class="inner">
                    <div id="canvas-seconds" class="clock-canvas"></div>
                    <div class="text">
                        <p class="val">0</p>
                        <p class="type-seconds type-time">SECONDS</p>
                    </div>
                    <!-- /.text -->
                </div>
                <!-- /.inner -->
            </div>
            <!-- /.wrap -->
        </div>
        <!-- /.clock-item -->
    </div>
    <!-- /.clock -->
</div>
<!-- /.countdown-wrapper -->
<script type="text/javascript" src="http://code.jquery.com/jquery-1.11.0.min.js"></script>
<script src="http://summit.fieldglass.com/sites/all/libraries/circular-countdown/jquery.final-countdown.js"></script>
<script type="text/javascript" src="http://summit.fieldglass.com/sites/all/libraries/circular-countdown/demo/js/kinetic.js"></script>
<script type="text/javascript">
    jQuery(document).ready(function() {
        jQuery(\'.countdown\').final_countdown({
            start: \'1362139200\',
            end: \'1465948800\',
            now: \'1387461319\',
            selectors: {
                value_seconds: \'.clock-seconds .val\',
                canvas_seconds: \'canvas_seconds\',
                value_minutes: \'.clock-minutes .val\',
                canvas_minutes: \'canvas_minutes\',
                value_hours: \'.clock-hours .val\',
                canvas_hours: \'canvas_hours\',
                value_days: \'.clock-days .val\',
                canvas_days: \'canvas_days\'
            },
            seconds: {
                borderColor: \'#7995D5\',
                borderWidth: \'6\'
            },
            minutes: {
                borderColor: \'#ACC742\',
                borderWidth: \'6\'
            },
            hours: {
                borderColor: \'#ECEFCB\',
                borderWidth: \'6\'
            },
            days: {
                borderColor: \'#FF9900\',
                borderWidth: \'6\'
            }}, function() {
            // Finish callback
        });
    });
</script>
<style>
    .countdown-container {
        position: relative;
        top: 50%;
        -webkit-transform: translateY(-50%);
        -moz-transform: translateY(-50%);
        transform: translateY(-50%);
    }
    .clock-item .inner {
        height: 0px;
        padding-bottom: 100%;
        position: relative;
        width: 100%;
    }
    .clock-canvas {
        background-color: rgba(255, 255, 255, .1);
        border-radius: 50%;
        height: 0px;
        padding-bottom: 100%;
    }
    .text {
        color: #fff;
        font-size: 30px;
        font-weight: bold;
        margin-top: -50px;
        position: absolute;
        top: 50%;
        text-align: center;
        text-shadow: 1px 1px 1px rgba(0, 0, 0, 1);
        width: 100%;
    }
    .text .val {
        font-size: 50px;
    }
    .text .type-time {
        font-size: 20px;
    }
    @media (min-width: 768px) and (max-width: 991px) {
        .clock-item {
            margin-bottom: 30px;
        }
    }
    @media (max-width: 767px) {
        .clock-item {
            margin: 0px 30px 30px 30px;
        }
    }
</style>',
  'info' => 'circular countdown',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 14,
  'body' => '<div class="filters"><div class="button-group filter-button-group" data-filter-group="region">
    Region: <button class="button is-checked" data-filter="">show all</button><button class="button" data-filter=".north">North America</button><button class="button" data-filter=".latin">Latin America</button><button class="button" data-filter=".apac">APAC</button><button class="button" data-filter=".emea">EMEA</button>
</div>
<div class="button-group filter-button-group" data-filter-group="management">
    Management model: <button class="button is-checked" data-filter="">show all</button><button class="button" data-filter=".msp">MSP</button><button class="button" data-filter=".self-managed">Self-managed</button><button class="button" data-filter=".hybrid">Hybrid</button>
</div>
<div class="button-group filter-button-group" data-filter-group="programs">
    Programs: <button class="button is-checked" data-filter="">show all</button><button class="button" data-filter=".sow">SOW</button><button class="button" data-filter=".contingent">Contingent</button><button class="button" data-filter=".profile">Profile Worker</button>
</div>
<div class="button-group filter-button-group" data-filter-group="maturity">
    Program Age: <button class="button is-checked" data-filter="">show all</button><button class="button" data-filter=".0-2">0-2 years</button><button class="button" data-filter=".3-5">3-5 years</button><button class="button" data-filter=".6-8">6-8 years</button><button class="button" data-filter=".9">9+ years</button><button class="button" data-filter=".implementation">Implementation</button>
</div>
<div class="button-group filter-button-group" data-filter-group="industry">
    Industry:   <button class="button is-checked" class="button" data-filter="">show all</button><button class="button" class="button" data-filter=".energy-resources-utility">Energy/Resources/Utility</button><button class="button" class="button" data-filter=".finance-insurance">Finanace/Insurance</button><button class="button" class="button" data-filter=".healthcare-pharma-med">Healthcare/Pharma/Med</button><button class="button" class="button" data-filter=".hospitality-leisure-transportation">Hospitality/Leisure/Transportation</button><button class="button" class="button" data-filter=".manufacturing-chemicals">Manufacturing/Chemicals</button><button class="button" class="button" data-filter=".not">Not for Profit/Gov\'t</button><button class="button" class="button" data-filter=".retail-packaging">Retail/Packaging</button><button class="button" class="button" data-filter=".technology-telecom">Technology/Telecom</button>
</div>
</div>

<style>
.Implementation .views-field-field-management-model, .Implementation .views-field-field-program, .Implementation .views-field-field-region {
    display: none;
}
</style>',
  'info' => 'Filter buttons for CO Profile page',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 15,
  'body' => '<div class="hero">
<!--<iframe width="100%" height="866px" src="https://www.youtube.com/embed/YWXj0igTvfQ" frameborder="0" allowfullscreen></iframe>-->
<img src="http://summit.localhost/sites/default/files/summit_top_img.jpg" />
<div class="herotext hp">
          <p ><span>Join Us June 14–16, 2017</span><span ></span></p><p ><span>Loews Chicago Hotel </span></p>
          <p class="hero_register"><a href="https://www.surveymonkey.com/r/CJKTNT3" target=_blank><img src="sites/default/files/register_white.svg" /></a></p>
          <div class="scroll_more"><img src="sites/default/files/scroll_to_view.gif" /><br />SCROLL TO VIEW MORE</div>

        </div>
</div>

<style>
.hero {
    margin-left: -1px;
}

</style>

',
  'info' => 'top hero image',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 16,
  'body' => '<div class="container-12 top_level ">
<div class="forum_cont">
<div class="forum_container grid-9 prefix-1">
   <div class="join_forum_hp">Join the SAP Fieldglass Forum</div>

   <div class="connect_hp">Connect and engage with your peers and the greater SAP Fieldglass family before, during and after the event. Join the SAP Fieldglass Forum, where members help one another develop skills and find resources by sharing information and best practices relating to the application, program management and industry.</div>
</div>
<div class="cta_hp grid-2"><a href="http://www.fieldglass.com/community/forum" target=_blank>Learn More</a></div>
</div>
</div>',
  'info' => 'Join SAP Forum',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 17,
  'body' => '<style>.embed-container { position: relative; padding-bottom: 56.25%; height: 0; overflow: hidden; max-width: 100%; } .embed-container iframe, .embed-container object, .embed-container embed { position: absolute; top: 0; left: 0; width: 100%; height: 100%; }</style>
<div class="mm_hp">
<div class=\'embed-container\'><iframe src=\'https://player.vimeo.com/video/178515124?autoplay=1\' frameborder=\'0\' webkitAllowFullScreen mozallowfullscreen allowFullScreen></iframe></div>
</div>
',
  'info' => 'mm-hp',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 18,
  'body' => '<div class="app-mobile grid-12">Download the<br>
   SAP Fieldglass Summit app to get started.
</div>
<div class="app-hp container-12">
   <div class="grid-5 iphone">
      <img src="http://summit.localhost/sites/default/files/animated_iphone.gif">
   </div>
   <div class="grid-6 app-dl">
      <div class="fingertips">The Summit at Your Fingertips</div>
      <div class="summit_app">SAP Fieldglass Summit App<br />
         Coming Soon
      </div>
      <div class="app_download">
         <div class="apple_dl"><a href="https://itunes.apple.com/us/app/sapfg-best-practices-summit/id1115332230?mt=8" target="_blank"><img src="http://summit.localhost/sites/default/files/app_store.png"></a></div>
         <div class="apple_dl"><a href="https://play.google.com/store/apps/details?id=com.quickmobile.sapfg16" target="_blank"><img src="http://summit.localhost/sites/default/files/google_play.png"></a></div>
      </div>
   </div>
</div>
</div>',
  'info' => 'hp-app',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 19,
  'body' => '<div class="footer_left">
    <div class="forum_hp">
      SAP Fieldglass Forum
  </div>
<div class="sign_in">
   <a href="http://www.fieldglass.com/community/forum" target=_blank>Register</a>  |  <a href="https://jam4.sapjam.com/home" target=_blank>Sign In</a>
</div>
</div>
',
  'info' => 'footer left',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 20,
  'body' => '<div class="footer_center">
    <div><img width=300px height=58px src="sites/default/files/footer__sap_fieldglass.png " /></div>
    <div class="social_icons">
        <div class="social_icon"><a href="https://www.facebook.com/sapfieldglass" target=_blank><img src="sites/default/files/facebook_icon.png" /></a></div>
        <div class="social_icon"><a href="https://twitter.com/SAPFieldglass" target=_blank><img src="sites/default/files/twitter_icon.png" /></a></div>
        <div class="social_icon"><a href="https://www.linkedin.com/company/sapfieldglass" target=_blank><img src="sites/default/files/linkedin_icon.png" /></a></div>
        <div class="social_icon"><a href="https://vimeo.com/sapfieldglass" target=_blank><img src="sites/default/files/vimeo_icon.png" /></a></div>
    </div>

</div>',
  'info' => 'footer center',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 21,
  'body' => '<div class="footer_right">
    <div class="summit_loc">
        Chicago, Illinois
    </div>
    <div class="summit_date">
        June 14-16, 2017
    </div>
</div>
',
  'info' => 'footer right',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 22,
  'body' => '<div class=\'stuff\'>
    <div class="main_menu">
        <ul>
            <li class="leaf"><label for="trigger2" class="dropdown_arrow">Overview</label>
                <input type="checkbox" id="trigger2" name="trigger2"/>
                <ul class="site_select">
                    <li><a href="why_attend">Why Attend</a></li>
                    <li><a href="travel">Travel + Accomodations</a></li>
                    <li><a href="faq">FAQ</a></li>
                </ul>
            </li>

            <li class="leaf"><a href="/agenda">Agenda</a></li>
            <li class="last leaf"><a href="/company-profile" title="">Attendees</a></li>

        </ul>
    </div>

</div>',
  'info' => 'main menu constructed',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 23,
  'body' => '<img src="sites/default/files/cityscape_chicago.png" />',
  'info' => 'cityscape',
  'format' => 'full_html',
);
  $export['block_custom'][] = array(
  'bid' => 24,
  'body' => '<link href="sites/all/libraries/all_around_jquery/css/content_slider_style.css" rel="stylesheet" type="text/css" />
<link rel="stylesheet" href="sites/all/libraries/all_around_jquery/css/prettyPhoto.css" type="text/css" media="screen" title="prettyPhoto main stylesheet" charset="utf-8" />
<script src="sites/all/libraries/all_around_jquery/js/jquery.content_slider.min.js" type="text/javascript"></script>
<script src="sites/all/libraries/all_around_jquery/js/jquery.mousewheel.js" type="text/javascript"></script>
<script src="sites/all/libraries/all_around_jquery/js/jquery.prettyPhoto.js" type="text/javascript" charset="utf-8"></script>
<script src="sites/all/libraries/all_around_jquery/js/jquery.animate-colors.js" type="text/javascript"></script>
<script src="sites/all/libraries/all_around_jquery/js/additional_content.js" type="text/javascript"></script>

<div class="grid-4 exp">
    <div class="summit_exp">What Will You Experience at the SAP Fieldglass Summit?</div>
    <div class="exp_text"><p>The Summit provides opportunities for you to network with and learn
        from your peers and the SAP Fieldglass team. Whether this is your
        first Summit or you’ve attended for years, you’ll go home an expert in
        how to establish, grow and optimize your services procurement and
        external workforce programs.</p>

        <p>See who’s speaking at this year’s Summit and check out the full
        <a href="agenda">agenda</a>.</p> </div>

</div>


<div class="grid-12 slideshow">
<div class="content_slider_wrapper" id="slider1">
    <div class="circle_slider_text_wrapper" id="sw0" style="display: none;">
        <!-- content for the first layer, id="sw0" -->
        <div class="content_slider_text_block_wrap">
            <div class="ss_name">Brian Cicirello</div>
			<div class="ss_job">Consultant, SAP Fieldglass</div>
            <div class="ss_session">Session title goes here. Session title goes here.</div>
        </div>
        <div class="clear"></div>
    </div>
    <div class="circle_slider_text_wrapper" id="sw1" style="display: none;">
        <div class="content_slider_text_block_wrap">
            <div class="ss_name">Arun Srinivasan</div>
            <div class="ss_job">Senior Vice President, Strategy and Customer Operations</div>
            <div class="ss_session">Session title goes here. Session title goes here.</div>
        </div>
        <div class="clear"></div>
    </div>
    <div class="circle_slider_text_wrapper" id="sw2" style="display: none;">
        <!-- content for the third layer, id="sw2" -->
        <div class="content_slider_text_block_wrap">
            <div class="ss_name">Robert Brimm</div>
            <div class="ss_job">President, SAP Fieldglass</div>
            <div class="ss_session">Session title goes here. Session title goes here.</div>
        </div>
        <div class="clear"></div>
    </div>
    <div class="circle_slider_text_wrapper" id="sw3" style="display: none;">
        <!-- content for the third layer, id="sw2" -->
        <div class="content_slider_text_block_wrap">
            <div class="ss_name">Vish Baliga</div>
            <div class="ss_job">CTO, SAP Fieldglass</div>
            <div class="ss_session">Session title goes here. Session title goes here.</div>
        </div>
        <div class="clear"></div>
    </div>
    <div class="circle_slider_text_wrapper" id="sw4" style="display: none;">
        <!-- content for the third layer, id="sw2" -->
        <div class="content_slider_text_block_wrap">
            <div class="ss_name">Deanna Freise</div>
            <div class="ss_job">Director, Product Management, SAP Fieldglass</div>
            <div class="ss_session">Session title goes here. Session title goes here.</div>
        </div>
        <div class="clear"></div>
    </div>
</div>

</div>

<script type="text/javascript">
    (function($){
        $(document).ready(function() {

            var image_array = new Array();
            image_array = [
                {image: \'sites/default/files/brianC.png\', link_url: \'content/1.png\', link_rel: \'prettyPhoto\'},
                // image for the first layer, goes with the text from id="sw0"
                {image: \'sites/default/files/arun.png\', link_url: \'content/2.png\', link_rel: \'prettyPhoto\'},
                // image for the second layer, goes with the text from id="sw1"
                {image: \'sites/default/files/rob.png\', link_url: \'some-page.html\', link_rel: \'prettyPhoto\'},
                {image: \'sites/default/files/vish.png\', link_url: \'content/2.png\', link_rel: \'prettyPhoto\'},
                {image: \'sites/default/files/deanna.png\', link_url: \'content/2.png\', link_rel: \'prettyPhoto\'}
                // image for the third layer, goes with the text from id="sw2"
                // if \'link_rel\' is empty, zoom icon will open link instead of an image.
                // \'main_link\' is a link for a whole big circle, and it is
                // available only if \'middle_click\': 3 (see parameters list below).
                // main_link_target: 0 = open link in the same window; 1 = in new tab
                // upper_text_label_show, lower_text_label_show = 0 means there is no text label,
                // 1 means there is a text label
                // upper_text_label, lower_text_label = text, content
                // upper_text_label_style, lower_text_label_style = CSS style, optional
            ];
            $(\'#slider1\').content_slider({	// bind plugin to div id="slider1"
                map : image_array,		// pointer to the image map
                max_shown_items: 5,		// number of visible circles
                moving_speed: 1,
                dinamically_set_class_id:1,
                dinamically_set_position_class:1,
                big_pic_width:375,
                big_pic_height:375,
                enable_mousewheel:0,
                hv_switch: 0,			// 0 = horizontal slider, 1 = vertical
                active_item: 1,			// layer that will be shown at start, 0=first, 1=second...
                wrapper_text_max_height: 810,	// height of widget, displayed in pixels
                middle_click: 1,		// when main circle is clicked:
                // 1 = slider will go to the previous circle, 2 = to the next,
                // 3 = open \'main_link\', 0 = nowhere (no response)
                border_radius: -1		// -1 = circle, 0 and other = radius
            });
            jQuery(".circle_slider_nav_left img").attr(\'src\', \'sites/default/files/ss_left.png\');
            jQuery(".circle_slider_nav_right img").attr(\'src\', \'sites/default/files/ss_right.png\');
        });
    })(jQuery);
</script>',
  'info' => 'All Around slider-hp',
  'format' => 'full_html',
);
return $export;
}
