<?php

define('VALOR_MAXIMO', 10);
define('VALOR_MINIMO', 0);

function calculaMedia(float $nota1, float $nota2) : float
{
    if ($nota1 > VALOR_MAXIMO || $nota1 < VALOR_MINIMO) {
        echo "Nota 1 não está entre 0 e 10! Tente novamente!";
        die;
    }

    if ($nota2 > VALOR_MAXIMO || $nota2 < VALOR_MINIMO) {
        echo "Nota 2 não está entre 0 e 10! Tente novamente!";
        die;
    }

    return ($nota1 + $nota2) / 2;
}

function decideAprovacaoPorMedia(float $media) : void
{
    echo 'Média: '. $media . '<br>';

    if ($media > 7) {
        echo 'Aluno aprovado <br>';
    } elseif ($media > 5) {
        echo 'Aluno em recuperação <br>';
    } else {
        echo 'Aluno reprovado <br>';
    }

    echo '<br>';
}

$nota_1 = 9;
$nota_2 = 4;

$media = calculaMedia($nota_1, $nota_2);
decideAprovacaoPorMedia($media);
