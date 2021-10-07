<?php

require_once('Models/Sistemas.php');
require_once('Helpers/StringHelper.php');
require_once('Helpers/UrlHelper.php');

var_dump($_POST);

$textoAleatorio = StringHelper::geraStringAleatoria();
$linkEncurtado = UrlHelper::geraUrl($textoAleatorio);

$model = new Sistemas();

$model->cria([
    'sistema' => $_POST['sistema'],
    'link_original' => $_POST['link-original'],
    'link_encurtado' => $linkEncurtado,
    'acessos' => 0,
]);
