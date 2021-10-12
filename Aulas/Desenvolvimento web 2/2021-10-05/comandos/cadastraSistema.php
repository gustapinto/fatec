<?php

require_once __DIR__ . '/../src/Modelos/SistemasModelo.php';
require_once __DIR__ . '/../src/Helpers/StringHelper.php';
require_once __DIR__ . '/../src/Helpers/UrlHelper.php';
require_once __DIR__ . '/../src/Redirecionador.php';

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
