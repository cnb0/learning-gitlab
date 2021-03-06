<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>




<?php if (!empty($page['accessibility'])): ?>
  <div id="accessibility_button"><?php print t('Accessibility'); ?></div>
  <?php print render($page['accessibility']); ?>
<?php endif; ?>

<header id="navbar" role="banner" class="<?php print $navbar_classes; ?>">
        <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
      <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
        <span class="sr-only">Toggle navigation</span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </button>




    <nav class="responsive_menu navbar-collapse collapse"> 
        <div class="header-top-mobile">
            <?php if (!empty($page['header_top'])): ?>
                <?php print render($page['header_top']); ?>
            <?php endif; ?> 
        </div>    
        <?php print render($primary_nav); ?>
            <?php if (!empty($page['responsive_menu'])): ?>
                <?php print render($page['responsive_menu']); ?>
            <?php endif; ?>

        <div class="col-md-12 res-navigation">
        <nav role="navigation row">

        <div class="secondary_nav"> 
      
        <?php if (!empty($secondary_nav)): ?>
            <?php print render($secondary_nav); ?>
        <?php endif; ?>
      
        <?php if (!empty($page['navigation'])): ?>
            <?php print render($page['navigation']); ?>
        <?php endif; ?>           
         </div>

        
         <!--<div class="navbar-header menu-top row">   
          <?php //if (!empty($primary_nav)): ?>
            <?php //print render($primary_nav); ?>
          <?php //endif; ?>
        </div>-->


        </nav>
      </div>
    </nav> 

        




  <div class="container row">
   <div class="navbar-header-tools">
      <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
        <div class="col-md-12"><!--class="collapse navbar-collapse col-md-9 !-->
          
        <div class="logo-and-header-top">
                  <div class="navbar-header-logo">
                    <?php if ($logo): ?>
                    <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
                      <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
                    </a>
                    <a class="logo-mobile" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
                      <img src="<?php print '/sites/default/files/logo_mobile.png'; ?>" alt="<?php print t('Home'); ?>" />
                  
                    </a>    
                    <?php endif; ?>

                    <?php if (!empty($site_name)): ?>
                    <a class="name navbar-brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a>
                    <?php endif; ?>
                </div>

                <?php if (!empty($page['header_top'])): ?>
                  <?php print render($page['header_top']); ?>
                <?php endif; ?> 

        </div>
          <nav role="navigation row">
            <div class="secondary_nav"> 
              
                <?php if (!empty($secondary_nav)): ?>
                  <?php print render($secondary_nav); ?>
                <?php endif; ?>
                
                <div class="not-res-navigation">
                  <?php if (!empty($page['navigation'])): ?>
                   <?php print render($page['navigation']); ?>
                  <?php endif; ?>           
                </div>
            </div>
            <div class="navbar-header menu-top row navbar-collapse collapse">   
                <?php if (!empty($primary_nav)): ?>
                  <?php print render($primary_nav); ?>
                <?php endif; ?>
            </div>
          </nav>
<?php 


?>

        </div>
      <?php endif; ?>
    </div>
  </div>
</header>
  
   


  <?php  

  if(!drupal_is_front_page() && $node->type != 'program' && $node->type != 'area'){
    $print_title = true;
    if(isset($node)){
      echo "<div class='top-wrapper-image'>";
      $print_title = fatfish_topImage($node,true,$title); 
      echo "</div>";
    }
    else if(isset($page['#views_contextual_links_info']['views_ui']['view_name'])){
      echo "<div class='top-wrapper-image'>";
        $print_title = fatfish_topImage($page,false,$title);
      echo "</div>";
    }   
  }

  ?>
  
		<?php if (!empty($page['highlighted'])): ?>
			<div class="highlighted">
				<?php print render($page['highlighted']); ?>
			</div>
		<?php endif; ?>   
	 <?php        
		  if (!empty($title) && !isset($page['#views_contextual_links_info']['views_ui']['view_name']) 
						   && (isset($node) && $node->type == 'program')): ?>
			<div class="main-title-wrapper">
			  <h1 class="main-title">
				<?php print $title; ?>
			  </h1>
			</div>
		<?php endif; ?>

		   
    <?php        
          if (!empty($title) && !isset($page['#views_contextual_links_info']['views_ui']['view_name'])): ?>
            <div>
              <h1 class="main-title-moble">
                <?php print $title; ?>

              </h1>
            </div>
    <?php endif; ?>


    <div class="help-container">
        <?php if (!empty($page['help'])): ?>
          <?php print render($page['help']); ?>
        <?php endif; ?>   
    </div>
    
<div class="main-container container">

  <header role="banner" id="page-header">
    <?php if (!empty($site_slogan)): ?>
      <p class="lead"><?php print $site_slogan; ?></p>
    <?php endif; ?>

    <?php print render($page['header']); ?>
  </header> <!-- /#page-header -->

  <div class="row page-content">



    <?php if (!empty($page['sidebar_first'])): ?>
      <aside class="col-sm-3" role="complementary">
        <?php print render($page['sidebar_first']); ?>
      </aside>  <!-- /#sidebar-first -->
    <?php endif; ?> 
	
	<?php //if (!drupal_is_front_page() && !empty($page['sidebar_second'])): ?>
      <?php $sidebar_col = drupal_is_front_page()? "col-sm-4" : "col-sm-3";?>
      <aside class="<?php print $sidebar_col; ?>" role="complementary">
        <?php print render($page['sidebar_second']); ?>
      </aside>  <!-- /#sidebar-second -->
    <?php //endif; ?> 
      
    <section
      <?php 
        if (drupal_is_front_page()) 
            $content_column_class = str_replace("col-sm-9","col-sm-8",$content_column_class);
        print $content_column_class; 
      ?>>

      <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
      <a id="main-content"></a>
        

    
      <?php print $messages; ?>
      <?php if (!empty($tabs)): ?>
        <?php print render($tabs); ?>
      <?php endif; ?>

      <?php if (!empty($action_links)): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
    
      
  
        
      <?php 
        
        if (!empty($title) && !isset($page['#views_contextual_links_info']['views_ui']['view_name']) 
                           && $node->type != 'program' && $node->type != 'area'): ?>
          <div>
            <h1 class="main-title">
              <?php print $title; ?>
            </h1>
          </div>
        <?php endif; ?>

        <?php print render($page['content']); ?>
    </section>
      
    

  </div>
</div>


<footer class="footer container">
  <?php print render($page['footer_top']); ?>
  <div class="footer-wrapper">
    <?php print render($page['footer']); ?>
    <?php print render($page['footer_bottom']); ?>
  </div>
</footer>
