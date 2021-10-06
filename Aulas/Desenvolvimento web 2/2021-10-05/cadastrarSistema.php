<?php

require_once('Models/Sistemas.php');

var_dump($_POST);

$model = new Sistemas();

$model->cria([
    'sistema' => $_POST['sistema'],
    'link_original' => $_POST['link-original'],
]);
