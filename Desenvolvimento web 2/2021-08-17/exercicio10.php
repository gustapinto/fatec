<?php

function calculaMedia($nota1, $nota2)
{
    return ($nota1 + $nota2) / 2;
}

$nota_1 = 9;
$nota_2 = 4;

$media = calculaMedia($nota_1, $nota_2);

echo 'Média: '. $media . '<br>';

if ($media > 7) {
    echo 'Aluno aprovado';
} elseif ($media > 5) {
    echo 'Aluno em recuperação';
} else {
    echo 'Aluno reprovado';
}
