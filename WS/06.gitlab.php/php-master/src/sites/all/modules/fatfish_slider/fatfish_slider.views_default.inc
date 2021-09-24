<?php
/**
 * @file
 * fatfish_slider.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fatfish_slider_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'homepageslider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'homepageslider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'עוד';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'התאמה';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיין לפי';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'עולה';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'יורד';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* שדה: תוכן: image */
  $handler->display->display_options['fields']['field_homepagesliderimage']['id'] = 'field_homepagesliderimage';
  $handler->display->display_options['fields']['field_homepagesliderimage']['table'] = 'field_data_field_homepagesliderimage';
  $handler->display->display_options['fields']['field_homepagesliderimage']['field'] = 'field_homepagesliderimage';
  $handler->display->display_options['fields']['field_homepagesliderimage']['label'] = '';
  $handler->display->display_options['fields']['field_homepagesliderimage']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_homepagesliderimage']['alter']['link_class'] = '[field_slider_link]';
  $handler->display->display_options['fields']['field_homepagesliderimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_homepagesliderimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_homepagesliderimage']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* שדה: תוכן: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '800',
  );
  /* Sort criterion: תוכן: מיון (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
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
    'homepageslider' => 'homepageslider',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_organizations_tid']['id'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['filters']['field_organizations_tid']['field'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_organizations_tid']['value'] = array(
    54 => '54',
  );
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['operator_id'] = 'field_organizations_tid_op';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['label'] = 'ארגון (field_organizations)';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['operator'] = 'field_organizations_tid_op';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['identifier'] = 'field_organizations_tid';

  /* Display: slide_home */
  $handler = $view->new_display('block', 'slide_home', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: image */
  $handler->display->display_options['fields']['field_homepagesliderimage']['id'] = 'field_homepagesliderimage';
  $handler->display->display_options['fields']['field_homepagesliderimage']['table'] = 'field_data_field_homepagesliderimage';
  $handler->display->display_options['fields']['field_homepagesliderimage']['field'] = 'field_homepagesliderimage';
  $handler->display->display_options['fields']['field_homepagesliderimage']['label'] = '';
  $handler->display->display_options['fields']['field_homepagesliderimage']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_homepagesliderimage']['alter']['link_class'] = '[field_slider_link]';
  $handler->display->display_options['fields']['field_homepagesliderimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_homepagesliderimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_homepagesliderimage']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* שדה: Broken/missing handler */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['label'] = '';
  $handler->display->display_options['fields']['field_organizations']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organizations']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_organizations']['alter']['text'] = '[field_organizations-tid]';
  $handler->display->display_options['fields']['field_organizations']['alter']['path'] = '[field_organizations-tid]';
  $handler->display->display_options['fields']['field_organizations']['element_label_colon'] = FALSE;
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
    'homepageslider' => 'homepageslider',
  );
  /* Filter criterion: תוכן: קדם לסליידר תחום (field_front) */
  $handler->display->display_options['filters']['field_front_value']['id'] = 'field_front_value';
  $handler->display->display_options['filters']['field_front_value']['table'] = 'field_data_field_front';
  $handler->display->display_options['filters']['field_front_value']['field'] = 'field_front_value';
  $handler->display->display_options['filters']['field_front_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_front_value']['expose']['operator_id'] = 'field_front_value_op';
  $handler->display->display_options['filters']['field_front_value']['expose']['label'] = 'show on front page (field_front)';
  $handler->display->display_options['filters']['field_front_value']['expose']['operator'] = 'field_front_value_op';
  $handler->display->display_options['filters']['field_front_value']['expose']['identifier'] = 'field_front_value';

  /* Display: slide_org */
  $handler = $view->new_display('block', 'slide_org', 'block_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: image */
  $handler->display->display_options['fields']['field_homepagesliderimage']['id'] = 'field_homepagesliderimage';
  $handler->display->display_options['fields']['field_homepagesliderimage']['table'] = 'field_data_field_homepagesliderimage';
  $handler->display->display_options['fields']['field_homepagesliderimage']['field'] = 'field_homepagesliderimage';
  $handler->display->display_options['fields']['field_homepagesliderimage']['label'] = '';
  $handler->display->display_options['fields']['field_homepagesliderimage']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_homepagesliderimage']['alter']['link_class'] = '[field_slider_link]';
  $handler->display->display_options['fields']['field_homepagesliderimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_homepagesliderimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_homepagesliderimage']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* שדה: תוכן: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'news' => 0,
    'igrot' => 0,
    'organizations' => 0,
    'prxho' => 0,
  );
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'קרא עוד >';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* שדה: Broken/missing handler */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['label'] = 'ארגון';
  $handler->display->display_options['fields']['field_organizations']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organizations']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_organizations']['alter']['text'] = '[field_organizations-tid]';
  $handler->display->display_options['fields']['field_organizations']['alter']['path'] = 'all-joint/[field_organizations-tid]';
  /* שדה: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'לסיפורים נוספים >';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'all-slides/[field_organizations]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* שדה: תוכן: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<h2>[term_node_tid] </h2>


</span>[body]<span id="read_m">[title]</span><span id="read_a">[nothing]';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '800',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['field_organizations_tid']['id'] = 'field_organizations_tid';
  $handler->display->display_options['arguments']['field_organizations_tid']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['arguments']['field_organizations_tid']['field'] = 'field_organizations_tid';
  $handler->display->display_options['arguments']['field_organizations_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_organizations_tid']['exception']['title'] = 'הכל';
  $handler->display->display_options['arguments']['field_organizations_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_organizations_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_organizations_tid']['default_argument_options']['vocabularies'] = array(
    'organizations' => 'organizations',
  );
  $handler->display->display_options['arguments']['field_organizations_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_organizations_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_organizations_tid']['summary_options']['items_per_page'] = '25';
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
    'homepageslider' => 'homepageslider',
    'slider_org' => 'slider_org',
  );

  /* Display: all_slides */
  $handler = $view->new_display('block', 'all_slides', 'block_3');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'החל';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיון לפי';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'אפשרויות מתקדמות',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_organizations_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: image */
  $handler->display->display_options['fields']['field_homepagesliderimage']['id'] = 'field_homepagesliderimage';
  $handler->display->display_options['fields']['field_homepagesliderimage']['table'] = 'field_data_field_homepagesliderimage';
  $handler->display->display_options['fields']['field_homepagesliderimage']['field'] = 'field_homepagesliderimage';
  $handler->display->display_options['fields']['field_homepagesliderimage']['label'] = '';
  $handler->display->display_options['fields']['field_homepagesliderimage']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_homepagesliderimage']['alter']['link_class'] = '[field_slider_link]';
  $handler->display->display_options['fields']['field_homepagesliderimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_homepagesliderimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_homepagesliderimage']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'קרא עוד';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* שדה: תוכן: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body][title]';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '800',
  );
  /* שדה: Broken/missing handler */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['label'] = '';
  $handler->display->display_options['fields']['field_organizations']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organizations']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['field_organizations_tid']['id'] = 'field_organizations_tid';
  $handler->display->display_options['arguments']['field_organizations_tid']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['arguments']['field_organizations_tid']['field'] = 'field_organizations_tid';
  $handler->display->display_options['arguments']['field_organizations_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_organizations_tid']['exception']['title'] = 'הכל';
  $handler->display->display_options['arguments']['field_organizations_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_organizations_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_organizations_tid']['default_argument_options']['vocabularies'] = array(
    'organizations' => 'organizations',
  );
  $handler->display->display_options['arguments']['field_organizations_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_organizations_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_organizations_tid']['summary_options']['items_per_page'] = '25';
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
    'homepageslider' => 'homepageslider',
  );
  $translatables['homepageslider'] = array(
    t('Master'),
    t('עוד'),
    t('התאמה'),
    t('איתחול'),
    t('מיין לפי'),
    t('עולה'),
    t('יורד'),
    t('ארגון (field_organizations)'),
    t('slide_home'),
    t('more'),
    t('[field_organizations-tid]'),
    t('show on front page (field_front)'),
    t('slide_org'),
    t('קרא עוד >'),
    t('ארגון'),
    t('לסיפורים נוספים >'),
    t('<h2>[term_node_tid] </h2>


</span>[body]<span id="read_m">[title]</span><span id="read_a">[nothing]'),
    t('הכל'),
    t('all_slides'),
    t('החל'),
    t('מיון לפי'),
    t('Asc'),
    t('Desc'),
    t('אפשרויות מתקדמות'),
    t('Select any filter and click on Apply to see results'),
    t('קרא עוד'),
    t('[body][title]'),
  );
  $export['homepageslider'] = $view;

  return $export;
}
