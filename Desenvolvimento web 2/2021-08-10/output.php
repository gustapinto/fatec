<?php

// A demo on PHP output functions

// PHP_OEL <- Adiciona o caractere de end of line próprio da plataforma
// no qual o código está hospedado
echo 'A output using echo <br>';

print 'A output using print <br>';

echo '<br><br>';

// Printing arrays
$array = [
    'Some string',
    'Another string',
    'Yet another string',
];

echo 'Print a array using var_dump() <br>';

var_dump($array);

echo '<br><br>';

echo 'Print a human readable array using print_r() <br>';

print_r($array);
