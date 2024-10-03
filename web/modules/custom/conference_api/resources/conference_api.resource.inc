<?php

/**
 * Retrieves a list of session nodes.
 */
function conference_api_get_sessions($args = array()) {
  return array(
    "status" => "success",
    "data" => array(
      "session_1" => "Introduction to Drupal",
      "session_2" => "Advanced PHP",
    ),
  );
}

