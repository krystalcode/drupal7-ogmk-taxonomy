<?php
/**
 * @file
 * ogmk_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ogmk_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'ogmk_categories' => array(
      'name' => 'Categories',
      'machine_name' => 'ogmk_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'ogmk_cost_types' => array(
      'name' => 'Cost Types',
      'machine_name' => 'ogmk_cost_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'ogmk_labels' => array(
      'name' => 'Labels',
      'machine_name' => 'ogmk_labels',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
