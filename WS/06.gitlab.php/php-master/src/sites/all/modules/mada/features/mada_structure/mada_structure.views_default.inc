<?php
/**
 * @file
 * mada_structure.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mada_structure_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'home_articles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'home articles';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'home articles';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'article' => 'article',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '2',
  );
  $handler->display->display_options['filters']['field_tags_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'article_thumb',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<div class = "slider_content">[title] <span class = "sep"> </span> [created]</div>';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.Y';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'home slide';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'home_slide',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<div class = "slider_content">[title] <span class = "sep"> </span> [created]</div>';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.Y';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'article' => 'article',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '1',
  );
  $handler->display->display_options['filters']['field_tags_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
  $translatables['home_articles'] = array(
    t('Master'),
    t('home articles'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Block'),
    t('<div class = "slider_content">[title] <span class = "sep"> </span> [created]</div>'),
    t('home slide'),
  );
  $export['home_articles'] = $view;

  $view = new view;
  $view->name = 'researchers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'researchers';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'researchers';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['empty'] = FALSE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['required'] = 0;
  /* Field: User: Full name */
  $handler->display->display_options['fields']['field_fullname_1']['id'] = 'field_fullname_1';
  $handler->display->display_options['fields']['field_fullname_1']['table'] = 'field_data_field_fullname';
  $handler->display->display_options['fields']['field_fullname_1']['field'] = 'field_fullname';
  $handler->display->display_options['fields']['field_fullname_1']['label'] = '';
  $handler->display->display_options['fields']['field_fullname_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_fullname_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_fullname_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fullname_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fullname_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fullname_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_fullname_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fullname_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fullname_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fullname_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fullname_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_fullname_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fullname_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fullname_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fullname_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_fullname_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fullname_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_fullname_1']['field_api_classes'] = 0;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'team_member',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: User: Full name */
  $handler->display->display_options['fields']['field_fullname']['id'] = 'field_fullname';
  $handler->display->display_options['fields']['field_fullname']['table'] = 'field_data_field_fullname';
  $handler->display->display_options['fields']['field_fullname']['field'] = 'field_fullname';
  $handler->display->display_options['fields']['field_fullname']['label'] = '';
  $handler->display->display_options['fields']['field_fullname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fullname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fullname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fullname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fullname']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fullname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_fullname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fullname']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_fullname']['field_api_classes'] = 0;
  /* Field: Field: Research Area */
  $handler->display->display_options['fields']['field_research_area_1']['id'] = 'field_research_area_1';
  $handler->display->display_options['fields']['field_research_area_1']['table'] = 'field_data_field_research_area';
  $handler->display->display_options['fields']['field_research_area_1']['field'] = 'field_research_area';
  $handler->display->display_options['fields']['field_research_area_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_research_area_1']['label'] = 'Research Area -';
  $handler->display->display_options['fields']['field_research_area_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_research_area_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_research_area_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_research_area_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_research_area_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_research_area_1']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['field_api_classes'] = 0;
  /* Field: Field: Research Area */
  $handler->display->display_options['fields']['field_research_area']['id'] = 'field_research_area';
  $handler->display->display_options['fields']['field_research_area']['table'] = 'field_data_field_research_area';
  $handler->display->display_options['fields']['field_research_area']['field'] = 'field_research_area';
  $handler->display->display_options['fields']['field_research_area']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_research_area']['label'] = 'Research area -';
  $handler->display->display_options['fields']['field_research_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_research_area']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_research_area']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_research_area']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_research_area']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_research_area']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_research_area']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_research_area']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_research_area']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_research_area']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_research_area']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_research_area']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_research_area']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_research_area']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_research_area']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_research_area']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_research_area']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_research_area']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_research_area']['type'] = 'taxonomy_tree';
  $handler->display->display_options['fields']['field_research_area']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_research_area']['delta_limit'] = '5';
  $handler->display->display_options['fields']['field_research_area']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_research_area']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_research_area']['field_api_classes'] = 0;
  /* Field: Profile: Current research */
  $handler->display->display_options['fields']['field_current_research']['id'] = 'field_current_research';
  $handler->display->display_options['fields']['field_current_research']['table'] = 'field_data_field_current_research';
  $handler->display->display_options['fields']['field_current_research']['field'] = 'field_current_research';
  $handler->display->display_options['fields']['field_current_research']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_current_research']['label'] = 'Current research -';
  $handler->display->display_options['fields']['field_current_research']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_current_research']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_current_research']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_current_research']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_current_research']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_current_research']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_current_research']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_current_research']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_current_research']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_current_research']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_current_research']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_current_research']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_current_research']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_current_research']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_current_research']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_current_research']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_current_research']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_current_research']['field_api_classes'] = 0;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 1;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['mail']['link_to_user'] = 0;
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_phone']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_phone']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_phone']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_phone']['field_api_classes'] = 0;
  /* Field: Field: Fax */
  $handler->display->display_options['fields']['field_job_fax']['id'] = 'field_job_fax';
  $handler->display->display_options['fields']['field_job_fax']['table'] = 'field_data_field_job_fax';
  $handler->display->display_options['fields']['field_job_fax']['field'] = 'field_job_fax';
  $handler->display->display_options['fields']['field_job_fax']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_job_fax']['label'] = '';
  $handler->display->display_options['fields']['field_job_fax']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_job_fax']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_job_fax']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_job_fax']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_job_fax']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_job_fax']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_job_fax']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_job_fax']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_job_fax']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_job_fax']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_job_fax']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_job_fax']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_job_fax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_fax']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_job_fax']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_job_fax']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_job_fax']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_job_fax']['field_api_classes'] = 0;
  /* Field: Field: Cell */
  $handler->display->display_options['fields']['field_cell']['id'] = 'field_cell';
  $handler->display->display_options['fields']['field_cell']['table'] = 'field_data_field_cell';
  $handler->display->display_options['fields']['field_cell']['field'] = 'field_cell';
  $handler->display->display_options['fields']['field_cell']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_cell']['label'] = '';
  $handler->display->display_options['fields']['field_cell']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cell']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cell']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cell']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cell']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cell']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cell']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cell']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cell']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cell']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cell']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cell']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cell']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cell']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cell']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cell']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cell']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_cell']['field_api_classes'] = 0;
  /* Field: Profile: Publications */
  $handler->display->display_options['fields']['field_publications']['id'] = 'field_publications';
  $handler->display->display_options['fields']['field_publications']['table'] = 'field_data_field_publications';
  $handler->display->display_options['fields']['field_publications']['field'] = 'field_publications';
  $handler->display->display_options['fields']['field_publications']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_publications']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_publications']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_publications']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_publications']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_publications']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_publications']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_publications']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_publications']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_publications']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_publications']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_publications']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_publications']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_publications']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_publications']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_publications']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_publications']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_publications']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_publications']['field_api_classes'] = 0;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Research Area (field_research_area) */
  $handler->display->display_options['filters']['field_research_area_tid']['id'] = 'field_research_area_tid';
  $handler->display->display_options['filters']['field_research_area_tid']['table'] = 'field_data_field_research_area';
  $handler->display->display_options['filters']['field_research_area_tid']['field'] = 'field_research_area_tid';
  $handler->display->display_options['filters']['field_research_area_tid']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_research_area_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_research_area_tid']['value'] = '';
  $handler->display->display_options['filters']['field_research_area_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_research_area_tid']['vocabulary'] = 'research_area';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 1;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = 'researcher/[uid]';
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'team_thumb',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: User: Full name */
  $handler->display->display_options['fields']['field_fullname']['id'] = 'field_fullname';
  $handler->display->display_options['fields']['field_fullname']['table'] = 'field_data_field_fullname';
  $handler->display->display_options['fields']['field_fullname']['field'] = 'field_fullname';
  $handler->display->display_options['fields']['field_fullname']['label'] = '';
  $handler->display->display_options['fields']['field_fullname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_fullname']['alter']['path'] = 'researcher/[uid]';
  $handler->display->display_options['fields']['field_fullname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fullname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fullname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fullname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fullname']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fullname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_fullname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fullname']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_fullname']['field_api_classes'] = 0;
  /* Field: Field: Research Area */
  $handler->display->display_options['fields']['field_research_area']['id'] = 'field_research_area';
  $handler->display->display_options['fields']['field_research_area']['table'] = 'field_data_field_research_area';
  $handler->display->display_options['fields']['field_research_area']['field'] = 'field_research_area';
  $handler->display->display_options['fields']['field_research_area']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_research_area']['label'] = '';
  $handler->display->display_options['fields']['field_research_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_research_area']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_research_area']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_research_area']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_research_area']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_research_area']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_research_area']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_research_area']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_research_area']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_research_area']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_research_area']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_research_area']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_research_area']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_research_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_research_area']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_research_area']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_research_area']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_research_area']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_research_area']['type'] = 'taxonomy_tree';
  $handler->display->display_options['fields']['field_research_area']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_research_area']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_research_area']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_research_area']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_research_area']['field_api_classes'] = 0;
  /* Field: Field: Research Area */
  $handler->display->display_options['fields']['field_research_area_1']['id'] = 'field_research_area_1';
  $handler->display->display_options['fields']['field_research_area_1']['table'] = 'field_data_field_research_area';
  $handler->display->display_options['fields']['field_research_area_1']['field'] = 'field_research_area';
  $handler->display->display_options['fields']['field_research_area_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_research_area_1']['label'] = '';
  $handler->display->display_options['fields']['field_research_area_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_research_area_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_research_area_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_research_area_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_research_area_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_research_area_1']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_research_area_1']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'researchers';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Researchers';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['label'] = 'List of Recent Publications';
  $handler->display->display_options['footer']['view']['empty'] = TRUE;
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'research_work:default';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Profile: User uid */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'profile';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['relationship'] = 'profile';
  $handler->display->display_options['arguments']['user']['default_action'] = 'default';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['user']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['user']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['user']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['user']['not'] = 0;
  $handler->display->display_options['path'] = 'researcher/%';
  $translatables['researchers'] = array(
    t('Master'),
    t('researchers'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Profile'),
    t('Research Area -'),
    t('Research area -'),
    t('Current research -'),
    t('Publications'),
    t('Page'),
    t('researcher/[uid]'),
    t('Researchers'),
    t('List of Recent Publications'),
    t('All'),
  );
  $export['researchers'] = $view;

  $view = new view;
  $view->name = 'team';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'team';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'team';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'team_thumb',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_mail']['id'] = 'field_mail';
  $handler->display->display_options['fields']['field_mail']['table'] = 'field_data_field_mail';
  $handler->display->display_options['fields']['field_mail']['field'] = 'field_mail';
  $handler->display->display_options['fields']['field_mail']['label'] = '';
  $handler->display->display_options['fields']['field_mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_mail']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_mail']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_mail']['field_api_classes'] = 0;
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_phone']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_phone']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_phone']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_phone']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'team_member' => 'team_member',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'team';
  $translatables['team'] = array(
    t('Master'),
    t('team'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Page'),
  );
  $export['team'] = $view;

  return $export;
}
