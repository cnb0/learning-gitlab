<?php
/**
 * @file
 * mada_structure.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function mada_structure_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-menu
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer Menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Exported menu: menu-side-menu
  $menus['menu-side-menu'] = array(
    'menu_name' => 'menu-side-menu',
    'title' => 'Side Menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Menu');
  t('Side Menu');


  return $menus;
}
