<?php

function somaPorValor(int $numero): int
{
    return $numero + 1;
}

function somaPorReferencia(int &$numero): void
{
    $numero += 1;
}

$numeroASerManipulado = 1;

echo 'Original: ' . $numeroASerManipulado . '<br>';

$soma = somaPorValor($numeroASerManipulado);

echo 'Soma por valor: ' . $soma . '<br>';
echo 'Original pós soma por valor: ' . $numeroASerManipulado . '<br>';

somaPorReferencia($numeroASerManipulado);

echo 'Original pós soma por referência: ' . $numeroASerManipulado . '<br>';
