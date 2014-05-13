<?php
/**
 * @file
 * hot_banner.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function hot_banner_field_default_field_bases() {
  
  // Exported field_base: 'field_basic_url'
  $field_bases['field_basic_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_basic_url',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_hot_styles'
  $field_bases['field_hot_styles'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hot_styles',
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
        'primary' => '<span class="text-primary">Primary</span>',
        'success' => '<span class="text-sucess">Success</span>',
        'info' => '<span class="text-info">Info</span>',
        'warning' => '<span class="text-warning">Warning</span>',
        'danger' => '<span class="text-danger">Danger</span>',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
