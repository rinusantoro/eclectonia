<?php
/**
 * @file
 * features_eclectonia.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function features_eclectonia_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|about_eclecto|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'about_eclecto';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col_equal_width';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
      ),
      'middle' => array(
        1 => 'field_image',
      ),
      'right' => array(
        2 => 'field_image_1',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'field_image' => 'middle',
      'field_image_1' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|about_eclecto|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
      ),
      'right' => array(
        1 => 'field_image',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'field_image' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|blog|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image',
      ),
      'right' => array(
        1 => 'body',
      ),
    ),
    'fields' => array(
      'field_image' => 'left',
      'body' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|single_item|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'single_item';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_4col';
  $ds_layout->settings = array(
    'regions' => array(
      'first' => array(
        0 => 'body',
      ),
      'second' => array(
        1 => 'field_image_1',
        2 => 'field_image_4',
      ),
      'third' => array(
        3 => 'field_image_2',
        4 => 'field_image_5',
      ),
      'fourth' => array(
        5 => 'field_image_3',
        6 => 'field_image_6',
      ),
    ),
    'fields' => array(
      'body' => 'first',
      'field_image_1' => 'second',
      'field_image_4' => 'second',
      'field_image_2' => 'third',
      'field_image_5' => 'third',
      'field_image_3' => 'fourth',
      'field_image_6' => 'fourth',
    ),
    'classes' => array(),
    'wrappers' => array(
      'first' => 'div',
      'second' => 'div',
      'third' => 'div',
      'fourth' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|single_item|default'] = $ds_layout;

  return $export;
}
