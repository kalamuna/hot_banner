<?php
/**
 * @file
 * hot_banner.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function hot_banner_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-hot_banner-field_basic_image_image'
  $field_instances['fieldable_panels_pane-hot_banner-field_basic_image_image'] = array(
    'bundle' => 'hot_banner',
    'deleted' => 0,
    'description' => '<ul>
<li>Provide alternative text, WebAIM Article: <em><a href="http://webaim.org/techniques/alttext/">Alternative Text</a></em></li>
<li>Minimum ~250px wide for best results.</li>
</ul>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox' => 'kalapicture_12',
          'fallback_image_style' => 'kalapicture_3_breakpoints_kalapicture_screen-sm_1x',
          'image_link' => '',
          'picture_group' => 'kalapicture_3',
        ),
        'type' => 'picture',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_basic_image_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'hot-banner/fields/field_basic_image_image',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'kalapicture_3_breakpoints_kalapicture_screen-md_1x',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-hot_banner-field_basic_url'
  $field_instances['fieldable_panels_pane-hot_banner-field_basic_url'] = array(
    'bundle' => 'hot_banner',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<strong>Heads Up</strong>,if supplied this will wrap the image and the title in the url.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_basic_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'enable' => 1,
        'insert_plugin' => 'raw_url',
      ),
      'rel_remove' => 'default',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-hot_banner-field_hot_jumbotron_caption'
  $field_instances['fieldable_panels_pane-hot_banner-field_hot_jumbotron_caption'] = array(
    'bundle' => 'hot_banner',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<strong>Heads Up!</strong> Keep this text short, it will be be displayed large.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_hot_jumbotron_caption',
    'label' => 'Caption',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-hot_banner-field_hot_styles'
  $field_instances['fieldable_panels_pane-hot_banner-field_hot_styles'] = array(
    'bundle' => 'hot_banner',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Bootstrap offeres some modifier classes, we can apply those styles to the base banner.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_hot_styles',
    'label' => 'Style Selector',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<strong>Heads Up!</strong> Keep this text short, it will be be displayed large.');
  t('<strong>Heads Up</strong>,if supplied this will wrap the image and the title in the url.');
  t('<ul>
<li>Provide alternative text, WebAIM Article: <em><a href="http://webaim.org/techniques/alttext/">Alternative Text</a></em></li>
<li>Minimum ~250px wide for best results.</li>
</ul>');
  t('Bootstrap offeres some modifier classes, we can apply those styles to the base banner.');
  t('Caption');
  t('Image');
  t('Style Selector');
  t('URL');

  return $field_instances;
}
