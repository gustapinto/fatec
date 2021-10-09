<?php

require_once('../src/Modelos/SistemasModelo.php');
require_once('../src/Helpers/StringHelper.php');
require_once('../src/Helpers/UrlHelper.php');
require_once('../src/Redirecionador.php');

$textoAleatorio = StringHelper::geraStringAleatoria();
$linkEncurtado = UrlHelper::geraUrl($textoAleatorio);

$modelo = new SistemasModelo();

$modelo->cria([
    'sistema' => $_POST['sistema'],
    'link_original' => $_POST['link-original'],
    'link_encurtado' => $linkEncurtado,
    'acessos' => 0,
]);

Redirecionador::view('index.php');
