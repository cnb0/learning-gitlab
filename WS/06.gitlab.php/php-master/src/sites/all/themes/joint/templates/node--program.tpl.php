<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 * 
 * --- custom variables:
 * - $fields_counter - count result for each field with multiple values (processed from joint_preprocess_node)
 */
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php
          //$block = module_invoke('block', 'block_view', '39');
		$block_id = 39;
		$block = block_block_view($block_id);
		$block['content'] = i18n_string(array('blocks', 'block', $block_id, 'body'), $block['content']);
        print render($block['content']);
         
  ?>  
  <?php print $user_picture; ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <div class="submitted">
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>

  <div class="content"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      //print render($content); 
    ?>
      
    <div hidden id = "development_level"><?php print t($content['field_development_level'][0]['#markup']);?></div>
    <div hidden id = "target_population_num"><?php print $content['field_target_population_num'][0]['#markup'];?></div>
    <div hidden id = "locations_cnt"><?php print count($node->locations); ?></div>
      
    <?php
        $view_name = 'program';

        $view_display_names = array(/*'target_population',*/ 'program_research', 'partners', 'success_stories');
        for ($index = 0; $index < sizeof($view_display_names); $index++){

            $my_view = views_get_view($view_name);

            if (is_object($my_view) ) { 

                $my_view->set_display($view_display_names[$index]);
                $my_view->pre_execute();
                $view_title[$view_display_names[$index]] = $my_view->get_title();
                $view_content[$view_display_names[$index]] = $my_view->render($view_display_names[$index]);  
            }
        }
    ?>
    <div class="print-link-wrapper">
        <a class="program-print-link" href="#" onclick="window.print();return false;" title="<?php print t('Print');?>"></a>
    </div>
    <div class="container" id="program_tab_views">
        <ul class="nav vertical-tabs-list col-md-3">
            <?php if ($content['field_tab_1'][0]['#markup'] != ''): ?>
                <li class="active"><a data-toggle="tab" href="#field_tab_1"><?php echo $content['field_tab_1']['#title']; ?></a></li>
            <?php endif;?>
            <?php if ($content['field_tab_2'][0]['#markup'] != ''): ?>
                <li><a data-toggle="tab" href="#field_tab_2"><?php echo $content['field_tab_2']['#title']; ?></a></li>
            <?php endif;?>
            <?php if ($content['field_tab_3'][0]['#markup'] != ''): ?>
                <li><a data-toggle="tab" href="#field_tab_3"><?php echo $content['field_tab_3']['#title']; ?></a></li>
            <?php endif;?>   
            <?php if ($view_content['program_research'] != ''): ?>
                <li class="program-researches-tab"><a data-toggle="tab" href="#program_research"><?php echo $view_title['program_research']; ?></a></li>
            <?php endif;?>
            <?php if (count($node->field_partners) > 0 ): ?>
                <li><a data-toggle="tab" href="#partners"><?php echo $view_title['partners']; ?></a></li>
            <?php endif;?> 
            <?php if ($view_content['success_stories'] != ''): ?>
                <li class="success-stories-tab"><a data-toggle="tab" href="#success_stories"><?php echo $view_title['success_stories']; ?></a></li>
            <?php endif;?> 
        </ul>
        <?php $classes = "tab-pane fade print";?>
        <div class="tab-content col-md-9">
            <?php if ($content['field_tab_1'][0]['#markup'] != ''): ?>
                <div id="field_tab_1" class="<?php print $classes;?> in active">
                    <h1><?php echo $content['field_tab_1']['#title']; ?></h1>
                    <p><?php echo $content['field_tab_1'][0]['#markup'];?></p>
                </div>
            <?php endif; ?>
            <?php if ($content['field_tab_2'][0]['#markup'] != ''): ?>
                <div id="field_tab_2" class="<?php print $classes;?>">
                    <h1><?php echo $content['field_tab_2']['#title']; ?></h1>
                    <p><?php echo $content['field_tab_2'][0]['#markup'];?></p>
                </div> 
            <?php endif; ?>
            <?php if ($content['field_tab_3'][0]['#markup'] != ''): ?>
                <div id="field_tab_3" class="<?php print $classes;?>">
                    <h1><?php echo $content['field_tab_3']['#title']; ?></h1>
                    <p><?php echo $content['field_tab_3'][0]['#markup'];?></p>
                </div> 
            <?php endif; ?>
            <div id="program_research" class="<?php print $classes;?>">
                <h1><?php echo $view_title['program_research']; ?></h1>
                <p><?php echo $view_content['program_research']; ?></p>
            </div>
            <?php if (count($node->field_partners) > 0 ): ?>
                <div id="partners" class="<?php print $classes;?>">
                    <h2 class="block-title"><span><?php echo $view_title['partners']; ?></span></h2>
                    <p><?php echo $view_content['partners']; ?></p>
                </div>
            <?php endif; ?>
            <div id="success_stories" class="<?php print $classes;?>">
                <h1><?php echo $view_title['success_stories']; ?></h1>
                <p><?php echo $view_content['success_stories']; ?></p>
            </div>          
        </div>
    </div>
  </div>

  <?php  print render($content['links']); ?>
  <?php  print render($content['comments']); ?>

</div>

