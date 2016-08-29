<?php
/**
 * @file
 * ogmk_taxonomy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ogmk_taxonomy_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
