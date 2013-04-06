<?php
/**
 * @file
 * Callbacks de administración del módulo saludar.
 */

/**
 * Define el formulario de opciones de configuración.
 */
function saludar_configuracion() {  
  $form['saludar_saludo'] = array(
    '#title' => 'Saludo que se muestra al usuario',  
    '#type' => 'textfield',
    '#default_value' => variable_get('saludar_saludo', 'Hola Mundo'),
    '#required' => TRUE,    
  );
  return system_settings_form($form);
}