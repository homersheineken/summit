<?php

function fieldglass_alpha_preprocess_page(&$vars) {
  //dpm($vars);
  drupal_add_css('sites/all/themes/fieldglass/css/resources.css', 'file');
  drupal_add_css('sites/all/themes/fieldglass/css/megan.css', 'file');
  drupal_add_css('sites/all/themes/fieldglass/css/rian.css', 'file');
  drupal_add_css('sites/all/themes/fieldglass/css/ie8-below.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 8', '!IE' => FALSE), 'preprocess' => FALSE));
  drupal_add_css('sites/all/themes/fieldglass/css/ie7.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 7', '!IE' => FALSE), 'preprocess' => FALSE));
  drupal_add_css('sites/all/themes/fieldglass/css/mobile.css', 'file');

  drupal_add_js('sites/all/themes/fieldglass/js/plugins.js', 'file');
  drupal_add_js('sites/all/themes/fieldglass/js/scripts.js', 'file');
  drupal_add_js('http://use.typekit.com/mrp4pid.js', 'external');
  drupal_add_js('try{Typekit.load();}catch(e){}', 'inline');
  drupal_add_js('sites/all/themes/fieldglass/js/vtabs.js', 'file');
}
