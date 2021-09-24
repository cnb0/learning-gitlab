<?php
/**
 * @file
 * front_page.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function front_page_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-language-menu.
  $menus['menu-language-menu'] = array(
    'menu_name' => 'menu-language-menu',
    'title' => 'תפריט שפות',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('תפריט שפות');

  return $menus;
}
