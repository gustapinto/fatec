<?php

$array = [
    "n1" => 10,
    "n2" => 20,
    "n3" => 30,
    "n4" => 'oi mundo',
];

// Exibindo todos os elementos
foreach ($array as $chave => $valor) {
    echo 'Valor ' . $chave . ': ' . $valor . '<br>';
}

echo '<br>';

// Exibindo apenas os inteiros
foreach ($array as $chave => $valor) {
    if (is_int($valor)) {
        echo 'Valor Inteiro ' . $chave . ': ' . $valor . '<br>';
    }
}

echo '<br>';

echo 'Soma inteiros: ' . array_sum($array) . '<br>';
