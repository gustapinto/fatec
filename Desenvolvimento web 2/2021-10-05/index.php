<?php

require_once('src/Redirecionador.php');

$uri = str_replace('2021-10-05/', '', $_SERVER['REQUEST_URI']);

switch ($uri) {
    case '/':
        Redirecionador::view('index.php');
        die;

    default:
        Redirecionador::link($_GET['s']);
        die;
}
