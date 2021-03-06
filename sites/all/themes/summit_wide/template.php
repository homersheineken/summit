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
 * Implements hook_process_region().
 */
function summit_wide_process_region(&$vars) {
    if (in_array($vars['elements']['#region'], array('content', 'menu', 'branding'))) {
        $theme = alpha_get_theme();

        switch ($vars['elements']['#region']) {
            case 'content':
                $vars['title_prefix'] = $theme->page['title_prefix'];
                $vars['title'] = $theme->page['title'];
                $vars['title_suffix'] = $theme->page['title_suffix'];
                $vars['tabs'] = $theme->page['tabs'];
                $vars['action_links'] = $theme->page['action_links'];
                $vars['title_hidden'] = $theme->page['title_hidden'];
                $vars['feed_icons'] = $theme->page['feed_icons'];
                break;

            case 'menu':
                $vars['main_menu'] = $theme->page['main_menu'];
                $vars['secondary_menu'] = $theme->page['secondary_menu'];
                break;

            case 'branding':
                $vars['site_name'] = $theme->page['site_name'];
                $vars['linked_site_name'] = l($vars['site_name'], '<front>', array('attributes' => array('title' => t('Home')), 'html' => TRUE));
                $vars['site_slogan'] = $theme->page['site_slogan'];
                $vars['site_name_hidden'] = $theme->page['site_name_hidden'];
                $vars['site_slogan_hidden'] = $theme->page['site_slogan_hidden'];
                $vars['logo'] = $theme->page['logo'];
                $vars['logo_img'] = $vars['logo'] ? '<img src="' . $vars['logo'] . '" alt="' . check_plain($vars['site_name']) . '" id="logo" />' : '';
                //changed to link "emea" for EMEA homepage. was front
                $vars['linked_logo_img'] = $vars['logo'] ? l($vars['logo_img'], 'emea', array('attributes' => array('rel' => 'home', 'title' => check_plain($vars['site_name'])), 'html' => TRUE)) : '';
                break;
        }
    }
}