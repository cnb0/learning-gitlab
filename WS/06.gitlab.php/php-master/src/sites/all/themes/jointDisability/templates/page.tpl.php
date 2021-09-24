
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
                    </div>
                    <nav role="navigation row" class="header_navigation">
                        <div class="secondary_nav"> 

                            <?php if (!empty($secondary_nav)): ?>
                                <?php print render($secondary_nav); ?>
                            <?php endif; ?>

                            <div class="not-res-navigation">
                                <?php if (!empty($page['navigation'])): ?>
                                    <?php print render($page['navigation']); ?>
                                <?php endif; ?>           
                                <div class="top_social">
                                    <span><a href="https://www.youtube.com/user/jdcisrael" target="_blank"><i class="fa fa-youtube-play" aria-hidden="true"></i></a></span>
                                    <span><a href="https://twitter.com/JDC_Israel" target="_blank"><i class="fa fa-twitter" aria-hidden="true"></i></i></a></span>
                                    <span><a href="https://www.facebook.com/joint.israel" target="_blank"><i class="fa fa-facebook" aria-hidden="true"></i></i></a></span>
                                </div>
                            </div>
                        </div>
                        <div class="navbar-header menu-top row navbar-collapse collapse">   
                            <?php if (!empty($primary_nav)): ?>
                                <?php print render($primary_nav); ?>
                            <?php endif; ?>
                        </div>
                    </nav>
                    <?php if (!empty($page['header_top'])): ?>
                        <?php print render($page['header_top']); ?>
                    <?php endif; ?>
                <?php endif; ?>
            </div>
        </div>
    </div>
</header>

<?php
if (!drupal_is_front_page()) {
    $print_title = true;
    if (isset($node)) {
        echo "<div class='top-wrapper-image'>";
        $print_title = fatfish_topImage($node, true, $title);
        echo "</div>";
    }
    else if (isset($page['#views_contextual_links_info']['views_ui']['view_name'])) {
        echo "<div class='top-wrapper-image'>";
        $print_title = fatfish_topImage($page, false, $title);
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
if (!empty($title) && !isset($page['#views_contextual_links_info']['views_ui']['view_name']) && (isset($node) && $node->type == 'program')):
    ?>
    <div class="main-title-wrapper">
        <h1 class="main-title">
            <?php print $title; ?>
        </h1>
    </div>
<?php endif; ?>


<?php if (!empty($title) && !isset($page['#views_contextual_links_info']['views_ui']['view_name'])): ?>
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

        <?php if (!empty($page['sidebar_first']) && $node->type != 'program'): ?>
            <aside class="col-sm-3" role="complementary">
                <?php print render($page['sidebar_first']); ?>
            </aside>  <!-- /#sidebar-first -->
        <?php endif; ?> 

        <?php if (!empty($page['sidebar_second']) && $node->type != 'program'): ?>
            <?php $sidebar_col = drupal_is_front_page() ? "col-sm-4" : "col-sm-3"; ?>
            <aside class="<?php print $sidebar_col; ?>" role="complementary">
                <?php print render($page['sidebar_second']); ?>
            </aside>  <!-- /#sidebar-second -->
        <?php endif; ?> 

        <section
        <?php
        if (drupal_is_front_page())
            $content_column_class = str_replace("col-sm-9", "col-sm-8", $content_column_class);
        if ($node->type == 'program')
            $content_column_class = str_replace("col-sm-9", "col-sm-12", $content_column_class);
        print $content_column_class;
        ?>>

            <?php
            if (!empty($breadcrumb)): print $breadcrumb;
            endif;
            ?>
            <a id="main-content"></a>
            <?php print $messages; ?>
            <?php if (!empty($tabs)): ?>
                <?php print render($tabs); ?>
            <?php endif; ?>

            <?php if (!empty($action_links)): ?>
                <ul class="action-links"><?php print render($action_links); ?></ul>
            <?php endif; ?>
            <?php
            if (!empty($title) && !isset($page['#views_contextual_links_info']['views_ui']['view_name']) && $node->type != 'program'):
                ?>
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
<?php if (isset($page['full_content'])) { ?>
    <div class="full_content">
        <?php print render($page['full_content']); ?>
    </div>
<?php } ?>
<footer class="footer container">
    <?php print render($page['footer_top']); ?>
    <div class="footer-wrapper">
        <?php print render($page['footer']); ?>
        <?php print render($page['footer_bottom']); ?>
    </div>
</footer>
