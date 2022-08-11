<?php

require_once 'exercicio11.php';

$nota_1 = 9;
$nota_2 = 4;

$media = calculaMedia($nota_1, $nota_2);
decideAprovacaoPorMedia($media);

$nota_1 = 1;
$nota_2 = 5;

$media = calculaMedia($nota_1, $nota_2);
decideAprovacaoPorMedia($media);


$nota_1 = 5;
$nota_2 = 3;

$media = calculaMedia($nota_1, $nota_2);
decideAprovacaoPorMedia($media);
