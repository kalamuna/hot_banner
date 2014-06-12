<?php
/**
 * @file panels-pane-fieldable-panels-pane--fieldable-kala-cta.tpl.php
 * kala Panel Template for Call to Action items
 *
 * Variables available:
 * - $pane->type: the content type inside this pane
 * - $pane->subtype: The subtype, if applicable. If a view it will be the
 *   view name; if a node it will be the nid, etc.
 * - $title: The title of the content
 * - $content: The actual content
 */
?>
<section <?php print drupal_attributes($variables['attributes_array']); ?>>
  <figure class="row">
    <figcaption class="jumbotron jumbotron-banner col-sm-9">
      <?php

       print render($elements['title']);
       print render($elements['field_hot_jumbotron_caption']);

      ?>
    </figcaption>
    <div class="col-sm-3">
      <?php if(isset($variables['url'])): ?>
      <a href="<?php print $variables['url'];?>" title="<?php print $variables['elements']['#fieldable_panels_pane']->title;?>">
      <?php endif; ?>
        <?php print render($variables['elements']['field_basic_image_image']);?>
      <?php if(isset($variables['url'])): ?>
      </a>
      <?php endif; ?>
    </div>
  </figure>
</section>
