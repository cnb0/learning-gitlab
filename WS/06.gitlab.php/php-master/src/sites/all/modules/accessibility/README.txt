1.You must add this code right above the header to your theme page.tpl.php for it to show 

<?php if (!empty($page['accessibility'])): ?>
  <div id="accessibility_button"><?php print t('Accessibility'); ?></div>
  <?php print render($page['accessibility']); ?>
<?php endif; ?>

2. translate the strings using drupal translate interface.