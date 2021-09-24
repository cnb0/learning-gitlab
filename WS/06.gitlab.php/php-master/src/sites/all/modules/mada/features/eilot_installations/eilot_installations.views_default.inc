<?php
/**
 * @file
 * eilot_installations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eilot_installations_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'node_openlayer_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Installation map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Geo Location  */
  $handler->display->display_options['fields']['field_geo_location']['id'] = 'field_geo_location';
  $handler->display->display_options['fields']['field_geo_location']['table'] = 'field_data_field_geo_location';
  $handler->display->display_options['fields']['field_geo_location']['field'] = 'field_geo_location';
  $handler->display->display_options['fields']['field_geo_location']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geo_location']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field__image']['id'] = 'field__image';
  $handler->display->display_options['fields']['field__image']['table'] = 'field_data_field__image';
  $handler->display->display_options['fields']['field__image']['field'] = 'field__image';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'installation' => 'installation',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Geo Location  */
  $handler->display->display_options['fields']['field_geo_location']['id'] = 'field_geo_location';
  $handler->display->display_options['fields']['field_geo_location']['table'] = 'field_data_field_geo_location';
  $handler->display->display_options['fields']['field_geo_location']['field'] = 'field_geo_location';
  $handler->display->display_options['fields']['field_geo_location']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geo_location']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field__image']['id'] = 'field__image';
  $handler->display->display_options['fields']['field__image']['table'] = 'field_data_field__image';
  $handler->display->display_options['fields']['field__image']['field'] = 'field__image';
  $handler->display->display_options['fields']['field__image']['label'] = '';
  $handler->display->display_options['fields']['field__image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field__image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field__image']['settings'] = array(
    'image_style' => 'gallery_hp',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'node-openlayer-map';

  /* Display: Block - small */
  $handler = $view->new_display('block', 'Block - small', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'installations_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Geo Location  (field_geo_location:wkt) */
  $handler->display->display_options['filters']['field_geo_location_wkt']['id'] = 'field_geo_location_wkt';
  $handler->display->display_options['filters']['field_geo_location_wkt']['table'] = 'field_data_field_geo_location';
  $handler->display->display_options['filters']['field_geo_location_wkt']['field'] = 'field_geo_location_wkt';
  $handler->display->display_options['filters']['field_geo_location_wkt']['operator'] = 'not empty';
  $handler->display->display_options['block_description'] = 'views_locations';

  /* Display: future installations */
  $handler = $view->new_display('openlayers', 'future installations', 'installation');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'field_geo_location',
    'other_lon' => 'field_geo_location',
    'wkt' => 'field_geo_location',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => 'body',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'installation_type' => 'installation_type',
    'news_categories' => 0,
    'tags' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Geo Location  */
  $handler->display->display_options['fields']['field_geo_location']['id'] = 'field_geo_location';
  $handler->display->display_options['fields']['field_geo_location']['table'] = 'field_data_field_geo_location';
  $handler->display->display_options['fields']['field_geo_location']['field'] = 'field_geo_location';
  $handler->display->display_options['fields']['field_geo_location']['label'] = '';
  $handler->display->display_options['fields']['field_geo_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geo_location']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geo_location']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field__image']['id'] = 'field__image';
  $handler->display->display_options['fields']['field__image']['table'] = 'field_data_field__image';
  $handler->display->display_options['fields']['field__image']['field'] = 'field__image';
  $handler->display->display_options['fields']['field__image']['label'] = '';
  $handler->display->display_options['fields']['field__image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field__image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field__image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field__image']['group_column'] = 'fid';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[field__image][body] ';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Taxonomy term: field_marker_path */
  $handler->display->display_options['fields']['field_field_marker_path']['id'] = 'field_field_marker_path';
  $handler->display->display_options['fields']['field_field_marker_path']['table'] = 'field_data_field_field_marker_path';
  $handler->display->display_options['fields']['field_field_marker_path']['field'] = 'field_field_marker_path';
  $handler->display->display_options['fields']['field_field_marker_path']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_field_marker_path']['label'] = '';
  $handler->display->display_options['fields']['field_field_marker_path']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'installation' => 'installation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Geo Location  (field_geo_location:wkt) */
  $handler->display->display_options['filters']['field_geo_location_wkt']['id'] = 'field_geo_location_wkt';
  $handler->display->display_options['filters']['field_geo_location_wkt']['table'] = 'field_data_field_geo_location';
  $handler->display->display_options['filters']['field_geo_location_wkt']['field'] = 'field_geo_location_wkt';
  $handler->display->display_options['filters']['field_geo_location_wkt']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_geo_location_wkt']['group'] = 1;
  /* Filter criterion: Content: active location (field_installation_future) */
  $handler->display->display_options['filters']['field_installation_future_value']['id'] = 'field_installation_future_value';
  $handler->display->display_options['filters']['field_installation_future_value']['table'] = 'field_data_field_installation_future';
  $handler->display->display_options['filters']['field_installation_future_value']['field'] = 'field_installation_future_value';
  $handler->display->display_options['filters']['field_installation_future_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: installations */
  $handler = $view->new_display('openlayers', 'installations', 'openlayers_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'field_geo_location',
    'other_lon' => 'field_geo_location',
    'wkt' => 'field_geo_location',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => 'body',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'installation_type' => 'installation_type',
    'news_categories' => 0,
    'tags' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Geo Location  */
  $handler->display->display_options['fields']['field_geo_location']['id'] = 'field_geo_location';
  $handler->display->display_options['fields']['field_geo_location']['table'] = 'field_data_field_geo_location';
  $handler->display->display_options['fields']['field_geo_location']['field'] = 'field_geo_location';
  $handler->display->display_options['fields']['field_geo_location']['label'] = '';
  $handler->display->display_options['fields']['field_geo_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geo_location']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geo_location']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field__image']['id'] = 'field__image';
  $handler->display->display_options['fields']['field__image']['table'] = 'field_data_field__image';
  $handler->display->display_options['fields']['field__image']['field'] = 'field__image';
  $handler->display->display_options['fields']['field__image']['label'] = '';
  $handler->display->display_options['fields']['field__image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field__image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field__image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field__image']['group_column'] = 'fid';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[field__image][body] bobkes';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Taxonomy term: field_marker_path */
  $handler->display->display_options['fields']['field_field_marker_path']['id'] = 'field_field_marker_path';
  $handler->display->display_options['fields']['field_field_marker_path']['table'] = 'field_data_field_field_marker_path';
  $handler->display->display_options['fields']['field_field_marker_path']['field'] = 'field_field_marker_path';
  $handler->display->display_options['fields']['field_field_marker_path']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_field_marker_path']['label'] = '';
  $handler->display->display_options['fields']['field_field_marker_path']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'installation' => 'installation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Geo Location  (field_geo_location:wkt) */
  $handler->display->display_options['filters']['field_geo_location_wkt']['id'] = 'field_geo_location_wkt';
  $handler->display->display_options['filters']['field_geo_location_wkt']['table'] = 'field_data_field_geo_location';
  $handler->display->display_options['filters']['field_geo_location_wkt']['field'] = 'field_geo_location_wkt';
  $handler->display->display_options['filters']['field_geo_location_wkt']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_geo_location_wkt']['group'] = 1;
  /* Filter criterion: Content: active location (field_installation_future) */
  $handler->display->display_options['filters']['field_installation_future_value']['id'] = 'field_installation_future_value';
  $handler->display->display_options['filters']['field_installation_future_value']['table'] = 'field_data_field_installation_future';
  $handler->display->display_options['filters']['field_installation_future_value']['field'] = 'field_installation_future_value';
  $handler->display->display_options['filters']['field_installation_future_value']['value'] = array(
    0 => '0',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Installation map page */
  $handler = $view->new_display('block', 'Installation map page', 'installations_full');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Geo Location  (field_geo_location:wkt) */
  $handler->display->display_options['filters']['field_geo_location_wkt']['id'] = 'field_geo_location_wkt';
  $handler->display->display_options['filters']['field_geo_location_wkt']['table'] = 'field_data_field_geo_location';
  $handler->display->display_options['filters']['field_geo_location_wkt']['field'] = 'field_geo_location_wkt';
  $handler->display->display_options['filters']['field_geo_location_wkt']['operator'] = 'not empty';
  $handler->display->display_options['block_description'] = 'views_locations';

  /* Display: Block 2 */
  $handler = $view->new_display('block', 'Block 2', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'List of locations';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_ins_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field__image' => 'field__image',
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Geo Location  */
  $handler->display->display_options['fields']['field_geo_location']['id'] = 'field_geo_location';
  $handler->display->display_options['fields']['field_geo_location']['table'] = 'field_data_field_geo_location';
  $handler->display->display_options['fields']['field_geo_location']['field'] = 'field_geo_location';
  $handler->display->display_options['fields']['field_geo_location']['label'] = '';
  $handler->display->display_options['fields']['field_geo_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geo_location']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geo_location']['type'] = 'geofield_lat';
  $handler->display->display_options['fields']['field_geo_location']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Content: Geo Location  */
  $handler->display->display_options['fields']['field_geo_location_1']['id'] = 'field_geo_location_1';
  $handler->display->display_options['fields']['field_geo_location_1']['table'] = 'field_data_field_geo_location';
  $handler->display->display_options['fields']['field_geo_location_1']['field'] = 'field_geo_location';
  $handler->display->display_options['fields']['field_geo_location_1']['label'] = '';
  $handler->display->display_options['fields']['field_geo_location_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geo_location_1']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geo_location_1']['type'] = 'geofield_lon';
  $handler->display->display_options['fields']['field_geo_location_1']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field__image']['id'] = 'field__image';
  $handler->display->display_options['fields']['field__image']['table'] = 'field_data_field__image';
  $handler->display->display_options['fields']['field__image']['field'] = 'field__image';
  $handler->display->display_options['fields']['field__image']['label'] = '';
  $handler->display->display_options['fields']['field__image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field__image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field__image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field__image']['settings'] = array(
    'image_style' => 'tinythumb',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field__image] [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Installation Type */
  $handler->display->display_options['fields']['field_ins_type']['id'] = 'field_ins_type';
  $handler->display->display_options['fields']['field_ins_type']['table'] = 'field_data_field_ins_type';
  $handler->display->display_options['fields']['field_ins_type']['field'] = 'field_ins_type';
  $handler->display->display_options['fields']['field_ins_type']['label'] = '';
  $handler->display->display_options['fields']['field_ins_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ins_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ins_type']['type'] = 'taxonomy_term_reference_plain';
  $translatables['node_openlayer_map'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term'),
    t('Geo Location '),
    t('Image'),
    t('Body'),
    t('All'),
    t('Page'),
    t('Block - small'),
    t('views_locations'),
    t('future installations'),
    t('[field__image][body] '),
    t('installations'),
    t('[field__image][body] bobkes'),
    t('Installation map page'),
    t('Block 2'),
    t('List of locations'),
    t('[field__image] [title]'),
  );
  $export['node_openlayer_map'] = $view;

  return $export;
}
