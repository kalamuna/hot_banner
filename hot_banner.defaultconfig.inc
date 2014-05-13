<?php
/**
 * @file
 * hot_bootstrap_jumbotron.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function hot_bootstrap_jumbotron_defaultconfig_features() {
  return array(
    'hot_bootstrap_jumbotron' => array(
      'field_default_fields' => 'field_default_fields',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function hot_bootstrap_jumbotron_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'fieldable_panels_pane-hot_bootstrap_jumbotron-field_basic_image_image'.
  $fields['fieldable_panels_pane-hot_bootstrap_jumbotron-field_basic_image_image'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_basic_image_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => 0,
      'module' => 'image',
      'settings' => array(
        'default_image' => 45,
        'uri_scheme' => 'public',
      ),
      'translatable' => 0,
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'hot_bootstrap_jumbotron',
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => 'theme_ds_field_reset',
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_basic_image_image',
      'label' => 'Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'alt_field_default' => '',
        'alt_field_hide' => 0,
        'alt_field_sync_title' => 0,
        'alt_field_update_on_edit' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'filefield_paths' => array(
          'active_updating' => 0,
          'file_name' => array(
            'options' => array(
              'pathauto' => 0,
              'transliterate' => 0,
            ),
            'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
          ),
          'file_path' => array(
            'options' => array(
              'pathauto' => 1,
              'transliterate' => 1,
            ),
            'value' => 'images/kala-cta/',
          ),
          'retroactive_update' => 0,
        ),
        'filefield_paths_enabled' => 1,
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 1,
        'title_field_default' => '',
        'title_field_hide' => 0,
        'title_field_update_on_edit' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'media',
        'settings' => array(
          'allowed_schemes' => array(
            0 => 'public',
            1 => 'private',
          ),
          'allowed_types' => array(
            0 => 'image',
          ),
          'browser_plugins' => array(),
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'media_generic',
        'weight' => 2,
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-hot_bootstrap_jumbotron-field_basic_text_text'.
  $fields['fieldable_panels_pane-hot_bootstrap_jumbotron-field_basic_text_text'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_basic_text_text',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'hot_bootstrap_jumbotron',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 2,
        ),
      ),
      'ds_extras_field_template' => 'theme_ds_field_minimal',
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_basic_text_text',
      'label' => 'Caption',
      'required' => 0,
      'settings' => array(
        'linkit' => array(
          'enable' => 0,
          'insert_plugin' => '',
        ),
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => 3,
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-hot_bootstrap_jumbotron-field_hot_bootstrap_jumbotron_style'.
  $fields['fieldable_panels_pane-hot_bootstrap_jumbotron-field_hot_bootstrap_jumbotron_style'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_hot_bootstrap_jumbotron_style',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'kala-cta-card-brand' => ' Card Style <small><em>Image optional variation</em></small>',
          'kala-cta-overlay' => ' Overlay',
          'kala-cta-caption-right' => ' Caption Right',
          'kala-cta-caption-left' => ' Caption Left',
          'kala-cta-no-image' => 'No image (remove me)',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => 0,
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'hot_bootstrap_jumbotron',
      'default_value' => array(
        0 => array(
          'value' => 'kala-cta-no-image',
        ),
      ),
      'deleted' => 0,
      'description' => '<p class="help-block">
  <ul class="list-inline">
    <li><strong>Card Style</strong> will give you a solid block of color that is set to the <span>Brand Color</span> in <a href="http://getbootstrap.com">TW Bootstrap</a></li>
    <li><strong>Overlay</strong> will position the caption over the whole image and center the text. </li>
    <li><strong>Caption Right</strong> will position the caption to the right on larger screens, then overlay on smaller sizes. </li>
    <li><strong>Caption Left</strong> will position the caption to the left on larger screens, then overlay on smaller sizes. </li>
  </ul>
</p>',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_key',
          'weight' => 3,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_hot_bootstrap_jumbotron_style',
      'label' => 'Style',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 4,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<p class="help-block">
  <ul class="list-inline">
    <li><strong>Card Style</strong> will give you a solid block of color that is set to the <span>Brand Color</span> in <a href="http://getbootstrap.com">TW Bootstrap</a></li>
    <li><strong>Overlay</strong> will position the caption over the whole image and center the text. </li>
    <li><strong>Caption Right</strong> will position the caption to the right on larger screens, then overlay on smaller sizes. </li>
    <li><strong>Caption Left</strong> will position the caption to the left on larger screens, then overlay on smaller sizes. </li>
  </ul>
</p>');
  t('Caption');
  t('Image');
  t('Style');

  return $fields;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function hot_bootstrap_jumbotron_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: create fieldable hot_bootstrap_jumbotron.
  $permissions['create fieldable hot_bootstrap_jumbotron'] = array(
    'name' => 'create fieldable hot_bootstrap_jumbotron',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable hot_bootstrap_jumbotron.
  $permissions['delete fieldable hot_bootstrap_jumbotron'] = array(
    'name' => 'delete fieldable hot_bootstrap_jumbotron',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable hot_bootstrap_jumbotron.
  $permissions['edit fieldable hot_bootstrap_jumbotron'] = array(
    'name' => 'edit fieldable hot_bootstrap_jumbotron',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'editor' => 'editor',
    ),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
