<?php
/**
 * @file
 * adds.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function adds_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'advertising_banners';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Advertising banners';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: קישור */
  $handler->display->display_options['fields']['field_advertising_link']['id'] = 'field_advertising_link';
  $handler->display->display_options['fields']['field_advertising_link']['table'] = 'field_data_field_advertising_link';
  $handler->display->display_options['fields']['field_advertising_link']['field'] = 'field_advertising_link';
  $handler->display->display_options['fields']['field_advertising_link']['label'] = '';
  $handler->display->display_options['fields']['field_advertising_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_advertising_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_advertising_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_advertising_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_advertising_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_advertising_link']['field_api_classes'] = 0;
  /* Field: Content: באנר */
  $handler->display->display_options['fields']['field_advertising_banner']['id'] = 'field_advertising_banner';
  $handler->display->display_options['fields']['field_advertising_banner']['table'] = 'field_data_field_advertising_banner';
  $handler->display->display_options['fields']['field_advertising_banner']['field'] = 'field_advertising_banner';
  $handler->display->display_options['fields']['field_advertising_banner']['label'] = '';
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['path'] = '[field_advertising_link]';
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_advertising_banner']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_advertising_banner']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_advertising_banner']['field_api_classes'] = 0;
  /* Field: Content: באנר */
  $handler->display->display_options['fields']['field_advertising_banner_1']['id'] = 'field_advertising_banner_1';
  $handler->display->display_options['fields']['field_advertising_banner_1']['table'] = 'field_data_field_advertising_banner';
  $handler->display->display_options['fields']['field_advertising_banner_1']['field'] = 'field_advertising_banner';
  $handler->display->display_options['fields']['field_advertising_banner_1']['label'] = '';
  $handler->display->display_options['fields']['field_advertising_banner_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner_1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner_1']['alter']['path'] = '[field_advertising_link]';
  $handler->display->display_options['fields']['field_advertising_banner_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner_1']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_advertising_banner_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_advertising_banner_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_advertising_banner_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_advertising_banner_1']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'advertising_banners' => 'advertising_banners',
  );
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';

  /* Display: position 1 */
  $handler = $view->new_display('block', 'position 1', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: קישור */
  $handler->display->display_options['fields']['field_advertising_link']['id'] = 'field_advertising_link';
  $handler->display->display_options['fields']['field_advertising_link']['table'] = 'field_data_field_advertising_link';
  $handler->display->display_options['fields']['field_advertising_link']['field'] = 'field_advertising_link';
  $handler->display->display_options['fields']['field_advertising_link']['label'] = '';
  $handler->display->display_options['fields']['field_advertising_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_advertising_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_advertising_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_advertising_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_advertising_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_advertising_link']['field_api_classes'] = 0;
  /* Field: Content: באנר */
  $handler->display->display_options['fields']['field_advertising_banner']['id'] = 'field_advertising_banner';
  $handler->display->display_options['fields']['field_advertising_banner']['table'] = 'field_data_field_advertising_banner';
  $handler->display->display_options['fields']['field_advertising_banner']['field'] = 'field_advertising_banner';
  $handler->display->display_options['fields']['field_advertising_banner']['label'] = '';
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['path'] = '[field_advertising_link]';
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_advertising_banner']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_advertising_banner']['settings'] = array(
    'image_style' => 'banner',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_advertising_banner']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'advertising_banners' => 'advertising_banners',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: מיקום (field_position) */
  $handler->display->display_options['filters']['field_position_value']['id'] = 'field_position_value';
  $handler->display->display_options['filters']['field_position_value']['table'] = 'field_data_field_position';
  $handler->display->display_options['filters']['field_position_value']['field'] = 'field_position_value';
  $handler->display->display_options['filters']['field_position_value']['value'] = array(
    1 => '1',
  );

  /* Display: position 2 */
  $handler = $view->new_display('attachment', 'position 2', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: קישור */
  $handler->display->display_options['fields']['field_advertising_link']['id'] = 'field_advertising_link';
  $handler->display->display_options['fields']['field_advertising_link']['table'] = 'field_data_field_advertising_link';
  $handler->display->display_options['fields']['field_advertising_link']['field'] = 'field_advertising_link';
  $handler->display->display_options['fields']['field_advertising_link']['label'] = '';
  $handler->display->display_options['fields']['field_advertising_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_advertising_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_advertising_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_advertising_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_advertising_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_advertising_link']['field_api_classes'] = 0;
  /* Field: Content: באנר */
  $handler->display->display_options['fields']['field_advertising_banner']['id'] = 'field_advertising_banner';
  $handler->display->display_options['fields']['field_advertising_banner']['table'] = 'field_data_field_advertising_banner';
  $handler->display->display_options['fields']['field_advertising_banner']['field'] = 'field_advertising_banner';
  $handler->display->display_options['fields']['field_advertising_banner']['label'] = '';
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['path'] = '[field_advertising_link]';
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_advertising_banner']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_advertising_banner']['settings'] = array(
    'image_style' => 'banner',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_advertising_banner']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: סדר ברשימה (field_advertising_weight) */
  $handler->display->display_options['sorts']['field_advertising_weight_value']['id'] = 'field_advertising_weight_value';
  $handler->display->display_options['sorts']['field_advertising_weight_value']['table'] = 'field_data_field_advertising_weight';
  $handler->display->display_options['sorts']['field_advertising_weight_value']['field'] = 'field_advertising_weight_value';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'advertising_banners' => 'advertising_banners',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: מיקום (field_position) */
  $handler->display->display_options['filters']['field_position_value']['id'] = 'field_position_value';
  $handler->display->display_options['filters']['field_position_value']['table'] = 'field_data_field_position';
  $handler->display->display_options['filters']['field_position_value']['field'] = 'field_position_value';
  $handler->display->display_options['filters']['field_position_value']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: position 3 */
  $handler = $view->new_display('attachment', 'position 3', 'attachment_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: קישור */
  $handler->display->display_options['fields']['field_advertising_link']['id'] = 'field_advertising_link';
  $handler->display->display_options['fields']['field_advertising_link']['table'] = 'field_data_field_advertising_link';
  $handler->display->display_options['fields']['field_advertising_link']['field'] = 'field_advertising_link';
  $handler->display->display_options['fields']['field_advertising_link']['label'] = '';
  $handler->display->display_options['fields']['field_advertising_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_advertising_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_advertising_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_advertising_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_advertising_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_advertising_link']['field_api_classes'] = 0;
  /* Field: Content: באנר */
  $handler->display->display_options['fields']['field_advertising_banner']['id'] = 'field_advertising_banner';
  $handler->display->display_options['fields']['field_advertising_banner']['table'] = 'field_data_field_advertising_banner';
  $handler->display->display_options['fields']['field_advertising_banner']['field'] = 'field_advertising_banner';
  $handler->display->display_options['fields']['field_advertising_banner']['label'] = '';
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['path'] = '[field_advertising_link]';
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_advertising_banner']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_advertising_banner']['settings'] = array(
    'image_style' => 'banner',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_advertising_banner']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'advertising_banners' => 'advertising_banners',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: מיקום (field_position) */
  $handler->display->display_options['filters']['field_position_value']['id'] = 'field_position_value';
  $handler->display->display_options['filters']['field_position_value']['table'] = 'field_data_field_position';
  $handler->display->display_options['filters']['field_position_value']['field'] = 'field_position_value';
  $handler->display->display_options['filters']['field_position_value']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: position 4 */
  $handler = $view->new_display('attachment', 'position 4', 'attachment_3');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: קישור */
  $handler->display->display_options['fields']['field_advertising_link']['id'] = 'field_advertising_link';
  $handler->display->display_options['fields']['field_advertising_link']['table'] = 'field_data_field_advertising_link';
  $handler->display->display_options['fields']['field_advertising_link']['field'] = 'field_advertising_link';
  $handler->display->display_options['fields']['field_advertising_link']['label'] = '';
  $handler->display->display_options['fields']['field_advertising_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_advertising_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_advertising_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_advertising_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_advertising_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_advertising_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_advertising_link']['field_api_classes'] = 0;
  /* Field: Content: באנר */
  $handler->display->display_options['fields']['field_advertising_banner']['id'] = 'field_advertising_banner';
  $handler->display->display_options['fields']['field_advertising_banner']['table'] = 'field_data_field_advertising_banner';
  $handler->display->display_options['fields']['field_advertising_banner']['field'] = 'field_advertising_banner';
  $handler->display->display_options['fields']['field_advertising_banner']['label'] = '';
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['path'] = '[field_advertising_link]';
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_advertising_banner']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_advertising_banner']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_advertising_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_advertising_banner']['settings'] = array(
    'image_style' => 'banner',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_advertising_banner']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'advertising_banners' => 'advertising_banners',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: מיקום (field_position) */
  $handler->display->display_options['filters']['field_position_value']['id'] = 'field_position_value';
  $handler->display->display_options['filters']['field_position_value']['table'] = 'field_data_field_position';
  $handler->display->display_options['filters']['field_position_value']['field'] = 'field_position_value';
  $handler->display->display_options['filters']['field_position_value']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $translatables['advertising_banners'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('[field_advertising_link]'),
    t('_blank'),
    t('position 1'),
    t('position 2'),
    t('position 3'),
    t('position 4'),
  );
  $export['advertising_banners'] = $view;

  return $export;
}
