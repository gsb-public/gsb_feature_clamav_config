<?php
/**
 * @file
 * gsb_feature_clamav_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_clamav_config_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clamav_daemon_host';
  $strongarm->value = 'localhost';
  $export['clamav_daemon_host'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clamav_daemon_port';
  $strongarm->value = '3310';
  $export['clamav_daemon_port'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clamav_daemon_unix_socket';
  $strongarm->value = '/var/clamav/clamd';
  $export['clamav_daemon_unix_socket'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clamav_enabled';
  $strongarm->value = 1;
  $export['clamav_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clamav_executable_parameters';
  $strongarm->value = '';
  $export['clamav_executable_parameters'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clamav_executable_path';
  $strongarm->value = '/usr/bin/clamscan';
  $export['clamav_executable_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clamav_mode';
  $strongarm->value = '1';
  $export['clamav_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clamav_overridden_schemes';
  $strongarm->value = array();
  $export['clamav_overridden_schemes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clamav_unchecked_files';
  $strongarm->value = '0';
  $export['clamav_unchecked_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clamav_verbose';
  $strongarm->value = 0;
  $export['clamav_verbose'] = $strongarm;

  return $export;
}
