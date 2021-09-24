<?php
/**
 * @file
 * adds.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function adds_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_advertising_banners';
  $strongarm->value = '1';
  $export['language_content_type_advertising_banners'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_advertising_banners';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_advertising_banners'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_advertising_banners';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_advertising_banners'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_advertising_banners';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_advertising_banners'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_advertising_banners';
  $strongarm->value = '0';
  $export['node_preview_advertising_banners'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_advertising_banners';
  $strongarm->value = 0;
  $export['node_submitted_advertising_banners'] = $strongarm;

  return $export;
}
