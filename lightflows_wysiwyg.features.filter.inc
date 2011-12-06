<?php
/**
 * @file
 * lightflows_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function lightflows_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_html' => array(
        'weight' => '1',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => '2',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
      'shortcode' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(
          'quote' => 1,
          'img' => 1,
          'highlight' => 1,
          'button' => 1,
          'dropcap' => 1,
          'item' => 1,
          'clear' => 1,
          'link' => 1,
          'test' => 1,
          'one_third' => 1,
          'two_third' => 1,
          'one_third_last' => 1,
          'two_third_last' => 1,
          'one_fourth' => 1,
          'one_half' => 1,
          'one_fourth_last' => 1,
          'one_half_last' => 1,
          'code' => 1,
        ),
      ),
      'shortcode_text' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '1',
    'filters' => array(
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_autop' => array(
        'weight' => '1',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
      'shortcode' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(
          'quote' => 1,
          'img' => 1,
          'highlight' => 1,
          'button' => 1,
          'dropcap' => 1,
          'item' => 1,
          'clear' => 1,
          'link' => 1,
          'test' => 1,
          'one_third' => 1,
          'two_third' => 1,
          'one_third_last' => 1,
          'two_third_last' => 1,
          'one_fourth' => 1,
          'one_half' => 1,
          'one_fourth_last' => 1,
          'one_half_last' => 1,
          'code' => 1,
        ),
      ),
      'shortcode_text' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: PHP code
  $formats['php_code'] = array(
    'format' => 'php_code',
    'name' => 'PHP code',
    'cache' => '0',
    'status' => '1',
    'weight' => '11',
    'filters' => array(
      'php_code' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => '1',
    'status' => '1',
    'weight' => '10',
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '1',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => '2',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
