<?php
/**
 * @file
 * features_eclectonia.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_eclectonia_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function features_eclectonia_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function features_eclectonia_node_info() {
  $items = array(
    'about_eclecto' => array(
      'name' => t('About Eclecto'),
      'base' => 'node_content',
      'description' => t('About Eclecto page with display suite module'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'single_item' => array(
      'name' => t('Single Item'),
      'base' => 'node_content',
      'description' => t('SIngle item page with display suite module'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
