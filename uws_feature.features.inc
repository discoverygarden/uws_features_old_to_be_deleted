<?php
/**
 * @file
 * uws_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uws_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uws_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_islandora_solr_fields_features_default_fields().
 */
function uws_feature_islandora_solr_fields_features_default_fields() {
  return array(
  0 => array(
    'solr_field' => 'dc.title',
    'field_type' => 'result_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'TItle',
      'link_to_object' => NULL,
      'snippet' => NULL,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  1 => array(
    'solr_field' => 'mods_name_personal_namePart_ms',
    'field_type' => 'facet_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Creator',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  2 => array(
    'solr_field' => 'mods_subject_topic_ms',
    'field_type' => 'facet_fields',
    'weight' => -9,
    'solr_field_settings' => array(
      'label' => 'Subject',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  3 => array(
    'solr_field' => 'mods_name_personal_namePart_ms',
    'field_type' => 'result_fields',
    'weight' => -9,
    'solr_field_settings' => array(
      'label' => 'Creator',
      'link_to_object' => NULL,
      'snippet' => NULL,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  4 => array(
    'solr_field' => 'dc.date',
    'field_type' => 'facet_fields',
    'weight' => -8,
    'solr_field_settings' => array(
      'label' => 'Date',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  5 => array(
    'solr_field' => 'mods_originInfo_dateIssued_dt',
    'field_type' => 'result_fields',
    'weight' => -8,
    'solr_field_settings' => array(
      'label' => 'Date',
      'link_to_object' => NULL,
      'snippet' => NULL,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  6 => array(
    'solr_field' => 'dc.format',
    'field_type' => 'facet_fields',
    'weight' => -7,
    'solr_field_settings' => array(
      'label' => 'Format Type',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  7 => array(
    'solr_field' => 'dc.format',
    'field_type' => 'result_fields',
    'weight' => -7,
    'solr_field_settings' => array(
      'label' => 'Format Type',
      'link_to_object' => NULL,
      'snippet' => NULL,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  8 => array(
    'solr_field' => 'dc.type',
    'field_type' => 'facet_fields',
    'weight' => -6,
    'solr_field_settings' => array(),
  ),
  9 => array(
    'solr_field' => 'mods_typeOfResource_mt',
    'field_type' => 'result_fields',
    'weight' => -6,
    'solr_field_settings' => array(
      'label' => 'Resource Type',
      'link_to_object' => NULL,
      'snippet' => NULL,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  10 => array(
    'solr_field' => 'dc.title',
    'field_type' => 'sort_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Title',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  11 => array(
    'solr_field' => 'dc.title',
    'field_type' => 'search_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Title',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  12 => array(
    'solr_field' => 'dc.date',
    'field_type' => 'sort_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Date',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  13 => array(
    'solr_field' => 'mods_name_personal_namePart_mt',
    'field_type' => 'search_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Author',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
  14 => array(
    'solr_field' => 'PID',
    'field_type' => 'sort_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'PID',
      'permissions' => array(
        1 => 1,
        3 => 3,
      ),
    ),
  ),
);
}

/**
 * Implements hook_islandora_solr_metadata_configurations_default_fields().
 */
function uws_feature_islandora_solr_metadata_configurations_default_fields() {
 return array(
  'uws_citation' => array(
    'fields' => array(
      'mods_titleInfo_title_ms' => array(
        'solr_field' => 'mods_titleInfo_title_ms',
        'display_label' => 'Title',
        'weight' => -4,
      ),
      'mods_name_personal_namePart_ms' => array(
        'solr_field' => 'mods_name_personal_namePart_ms',
        'display_label' => 'Author',
        'weight' => -4,
      ),
      'mods_relatedItem_host_titleInfo_title_ms' => array(
        'solr_field' => 'mods_relatedItem_host_titleInfo_title_ms',
        'display_label' => 'Journal',
        'weight' => -4,
      ),
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'display_label' => 'Abstract',
        'weight' => -3,
      ),
      'mods_originInfo_dateIssued_dt' => array(
        'solr_field' => 'mods_originInfo_dateIssued_dt',
        'display_label' => 'Date',
        'weight' => 5,
      ),
      'mods_part_detail_volume_number_ms' => array(
        'solr_field' => 'mods_part_detail_volume_number_ms',
        'display_label' => 'Volume',
        'weight' => 6,
      ),
      'mods_part_detail_issue_number_ms' => array(
        'solr_field' => 'mods_part_detail_issue_number_ms',
        'display_label' => 'Issue',
        'weight' => 7,
      ),
      'mods_part_extent_start_ms' => array(
        'solr_field' => 'mods_part_extent_start_ms',
        'display_label' => 'Start Page',
        'weight' => 8,
      ),
      'mods_part_extent_end_ms' => array(
        'solr_field' => 'mods_part_extent_end_ms',
        'display_label' => 'End Page',
        'weight' => 9,
      ),
      'mods_identifier_issn_ms' => array(
        'solr_field' => 'mods_identifier_issn_ms',
        'display_label' => 'ISSN',
        'weight' => 10,
      ),
      'mods_subject_topic_ms' => array(
        'solr_field' => 'mods_subject_topic_ms',
        'display_label' => 'Subjects',
        'weight' => 11,
      ),
      'mods_note_ms' => array(
        'solr_field' => 'mods_note_ms',
        'display_label' => 'Note',
        'weight' => 12,
      ),
    ),
    'cmodels' => array(
      'ir:citationCModel' => array(
        'cmodel' => 'ir:citationCModel',
      ),
    ),
    'description' => array(
      'description_field' => 'mods_abstract_ms',
      'description_label' => 'Abstract',
    ),
    'name' => 'UWS Metadata',
  ),
);
}

/**
 * Implements hook_node_info().
 */
function uws_feature_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
