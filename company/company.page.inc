<?php

/**
 * @file
 * Contains company.page.inc.
 *
 * Page callback for Company entities.
 */

use Drupal\Core\Render\Element;

/**
 * Prepares variables for Company templates.
 *
 * Default template: company.html.twig.
 *
 * @param array $variables
 *   An associative array containing:
 *   - elements: An associative array containing the user information and any
 *   - attributes: HTML attributes for the containing element.
 */
function template_preprocess_company(array &$variables) {
  // Fetch Company Entity Object.
  $company = $variables['elements']['#company'];

  // Helpful $content variable for templates.
  foreach (Element::children($variables['elements']) as $key) {
    $variables['content'][$key] = $variables['elements'][$key];
  }
}
