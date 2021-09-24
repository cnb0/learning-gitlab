<?php
/**
 * @file
 * front_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function front_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'front_page_elements';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'front page elements';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'החל';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיון לפי';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* כותרת: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '[field_news_area_title]';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Relationship: תוכן: סליידר (field_slider) */
  $handler->display->display_options['relationships']['field_slider_value']['id'] = 'field_slider_value';
  $handler->display->display_options['relationships']['field_slider_value']['table'] = 'field_data_field_slider';
  $handler->display->display_options['relationships']['field_slider_value']['field'] = 'field_slider_value';
  /* שדה: שדה: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_slider_value';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'front_banner',
    'image_link' => '',
  );
  /* שדה: Field collection item: אייקון */
  $handler->display->display_options['fields']['field_icon']['id'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['table'] = 'field_data_field_icon';
  $handler->display->display_options['fields']['field_icon']['field'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['relationship'] = 'field_slider_value';
  $handler->display->display_options['fields']['field_icon']['label'] = '';
  $handler->display->display_options['fields']['field_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_icon']['settings'] = array(
    'image_style' => 'slider_icon',
    'image_link' => '',
  );
  /* שדה: שדה: תקציר */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['relationship'] = 'field_slider_value';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  /* Contextual filter: תוכן: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'הכל';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'home_page' => 'home_page',
  );

  /* Display: slider */
  $handler = $view->new_display('block', 'slider', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: תוכן: סליידר (field_slider) */
  $handler->display->display_options['relationships']['field_slider_value']['id'] = 'field_slider_value';
  $handler->display->display_options['relationships']['field_slider_value']['table'] = 'field_data_field_slider';
  $handler->display->display_options['relationships']['field_slider_value']['field'] = 'field_slider_value';
  $handler->display->display_options['relationships']['field_slider_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: שדה: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_slider_value';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* שדה: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'fieldset_1',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'outter';
  /* שדה: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_icon',
    1 => 'field_body',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'inner';
  /* שדה: Field collection item: אייקון */
  $handler->display->display_options['fields']['field_icon']['id'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['table'] = 'field_data_field_icon';
  $handler->display->display_options['fields']['field_icon']['field'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['relationship'] = 'field_slider_value';
  $handler->display->display_options['fields']['field_icon']['label'] = '';
  $handler->display->display_options['fields']['field_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_icon']['settings'] = array(
    'image_style' => 'slider_icon',
    'image_link' => '',
  );
  /* שדה: שדה: תקציר */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['relationship'] = 'field_slider_value';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'home_page' => 'home_page',
  );
  /* Filter criterion: שדה: Image (field_image:fid) */
  $handler->display->display_options['filters']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['filters']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['relationship'] = 'field_slider_value';
  $handler->display->display_options['filters']['field_image_fid']['operator'] = 'not empty';

  /* Display: news area */
  $handler = $view->new_display('block', 'news area', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'news_area';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: תוכן: איזור חדשות (field_news_area) */
  $handler->display->display_options['relationships']['field_news_area_value']['id'] = 'field_news_area_value';
  $handler->display->display_options['relationships']['field_news_area_value']['table'] = 'field_data_field_news_area';
  $handler->display->display_options['relationships']['field_news_area_value']['field'] = 'field_news_area_value';
  $handler->display->display_options['relationships']['field_news_area_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: כותרת איזור החדשות */
  $handler->display->display_options['fields']['field_news_area_title']['id'] = 'field_news_area_title';
  $handler->display->display_options['fields']['field_news_area_title']['table'] = 'field_data_field_news_area_title';
  $handler->display->display_options['fields']['field_news_area_title']['field'] = 'field_news_area_title';
  $handler->display->display_options['fields']['field_news_area_title']['label'] = '';
  $handler->display->display_options['fields']['field_news_area_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_area_title']['element_label_colon'] = FALSE;
  /* שדה: Field collection item: צבע החץ */
  $handler->display->display_options['fields']['field_arrow_color']['id'] = 'field_arrow_color';
  $handler->display->display_options['fields']['field_arrow_color']['table'] = 'field_data_field_arrow_color';
  $handler->display->display_options['fields']['field_arrow_color']['field'] = 'field_arrow_color';
  $handler->display->display_options['fields']['field_arrow_color']['relationship'] = 'field_news_area_value';
  $handler->display->display_options['fields']['field_arrow_color']['label'] = '';
  $handler->display->display_options['fields']['field_arrow_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_arrow_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arrow_color']['type'] = 'jquery_colorpicker_text_display';
  /* שדה: Field collection item: קטגוריה */
  $handler->display->display_options['fields']['field__category']['id'] = 'field__category';
  $handler->display->display_options['fields']['field__category']['table'] = 'field_data_field__category';
  $handler->display->display_options['fields']['field__category']['field'] = 'field__category';
  $handler->display->display_options['fields']['field__category']['relationship'] = 'field_news_area_value';
  $handler->display->display_options['fields']['field__category']['label'] = '';
  $handler->display->display_options['fields']['field__category']['element_label_colon'] = FALSE;
  /* שדה: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_image',
    1 => 'field_title',
    2 => 'field_date',
    3 => 'field_body',
    4 => 'field_link',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'news-item';
  /* שדה: שדה: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_news_area_value';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '420x270',
    'image_link' => '',
  );
  /* שדה: Field collection item: כותרת */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['relationship'] = 'field_news_area_value';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* שדה: שדה: תאריך */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_news_area_value';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'news_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* שדה: שדה: תקציר */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['relationship'] = 'field_news_area_value';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_body']['settings'] = array(
    'trim_length' => '180',
  );
  /* שדה: שדה: קישור */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['relationship'] = 'field_news_area_value';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';

  /* Display: gifs area */
  $handler = $view->new_display('block', 'gifs area', 'block_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'gifs_area';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* כותרת: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '[field_gifs_section_title]
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: תוכן: אזור הגיפים (field_gifs_section) */
  $handler->display->display_options['relationships']['field_gifs_section_value']['id'] = 'field_gifs_section_value';
  $handler->display->display_options['relationships']['field_gifs_section_value']['table'] = 'field_data_field_gifs_section';
  $handler->display->display_options['relationships']['field_gifs_section_value']['field'] = 'field_gifs_section_value';
  $handler->display->display_options['relationships']['field_gifs_section_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: כותרת איזור הגיפים */
  $handler->display->display_options['fields']['field_gifs_section_title']['id'] = 'field_gifs_section_title';
  $handler->display->display_options['fields']['field_gifs_section_title']['table'] = 'field_data_field_gifs_section_title';
  $handler->display->display_options['fields']['field_gifs_section_title']['field'] = 'field_gifs_section_title';
  $handler->display->display_options['fields']['field_gifs_section_title']['label'] = '';
  $handler->display->display_options['fields']['field_gifs_section_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_gifs_section_title']['element_label_colon'] = FALSE;
  /* שדה: Field collection item: גיפ */
  $handler->display->display_options['fields']['field_gif']['id'] = 'field_gif';
  $handler->display->display_options['fields']['field_gif']['table'] = 'field_data_field_gif';
  $handler->display->display_options['fields']['field_gif']['field'] = 'field_gif';
  $handler->display->display_options['fields']['field_gif']['relationship'] = 'field_gifs_section_value';
  $handler->display->display_options['fields']['field_gif']['label'] = '';
  $handler->display->display_options['fields']['field_gif']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gif']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gif']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* שדה: Field collection item: שורה 1 */
  $handler->display->display_options['fields']['field_line_1']['id'] = 'field_line_1';
  $handler->display->display_options['fields']['field_line_1']['table'] = 'field_data_field_line_1';
  $handler->display->display_options['fields']['field_line_1']['field'] = 'field_line_1';
  $handler->display->display_options['fields']['field_line_1']['relationship'] = 'field_gifs_section_value';
  $handler->display->display_options['fields']['field_line_1']['label'] = '';
  $handler->display->display_options['fields']['field_line_1']['element_label_colon'] = FALSE;
  /* שדה: Field collection item: שורה 2 */
  $handler->display->display_options['fields']['field_line_2']['id'] = 'field_line_2';
  $handler->display->display_options['fields']['field_line_2']['table'] = 'field_data_field_line_2';
  $handler->display->display_options['fields']['field_line_2']['field'] = 'field_line_2';
  $handler->display->display_options['fields']['field_line_2']['relationship'] = 'field_gifs_section_value';
  $handler->display->display_options['fields']['field_line_2']['label'] = '';
  $handler->display->display_options['fields']['field_line_2']['element_label_colon'] = FALSE;
  $translatables['front_page_elements'] = array(
    t('Master'),
    t('more'),
    t('החל'),
    t('איתחול'),
    t('מיון לפי'),
    t('Asc'),
    t('Desc'),
    t('[field_news_area_title]'),
    t('field collection item from field_slider'),
    t('הכל'),
    t('slider'),
    t('Fieldset'),
    t('news area'),
    t('field collection item from field_news_area'),
    t('gifs area'),
    t('[field_gifs_section_title]
'),
    t('field collection item from field_gifs_section'),
  );
  $export['front_page_elements'] = $view;

  return $export;
}
