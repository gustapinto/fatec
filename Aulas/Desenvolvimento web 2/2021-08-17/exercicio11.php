<?php

declare(strict_types=1);

function calculaMedia(float $nota1, float $nota2) : float
{
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
