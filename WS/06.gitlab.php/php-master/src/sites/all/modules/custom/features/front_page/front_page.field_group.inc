<?php
/**
 * @file
 * front_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function front_page_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gifs_section|node|home_page|form';
  $field_group->group_name = 'group_gifs_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'אזור הגיפים',
    'weight' => '4',
    'children' => array(
      0 => 'field_gifs_section_title',
      1 => 'field_gifs_section',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-gifs-section field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_gifs_section|node|home_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_area|node|home_page|form';
  $field_group->group_name = 'group_news_area';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'איזור חדשות',
    'weight' => '3',
    'children' => array(
      0 => 'field_news_area',
      1 => 'field_news_area_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'איזור חדשות',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-news-area field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_news_area|node|home_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('אזור הגיפים');
  t('איזור חדשות');

  return $field_groups;
}
