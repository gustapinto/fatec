<?php

$relacaoDeMeses = [
    'Janeiro',
    'Fevereiro',
    'Março',
    'Abril',
    'Maio',
    'Junho',
    'Julho',
    'Agosto',
    'Setembro',
    'Outubro',
    'Novembro',
    'Dezembro',
];

// Lembra de usar uma url como 0.0.0.0/?mes=int
$mes = $_GET['mes'];

if ($mes < 1 || $mes > 12) {
    echo "O mês desejado não existe, tente novamente com um número entre 1 e 12";
    die;
}

echo $relacaoDeMeses[$mes - 1];
