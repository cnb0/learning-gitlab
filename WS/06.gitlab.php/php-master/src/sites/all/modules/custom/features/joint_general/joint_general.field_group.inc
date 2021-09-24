<?php
/**
 * @file
 * joint_general.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function joint_general_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|program|teaser';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'program';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_tab_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'wrapper',
      'instance_settings' => array(
        'classes' => 'col-md-6 group-wrapper field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_program_teaser_group_wrapper',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_wrapper|node|program|teaser'] = $field_group;

  return $export;
}
