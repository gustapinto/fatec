<?php

$nota_1 = 9;
$nota_2 = 4;

$media = ($nota_1 + $nota_2) / 2;

echo 'Média: '. $media . '<br>';

if ($media > 7) {
    echo 'Aluno aprovado';
} elseif ($media > 5) {
    echo 'Aluno em recuperação';
} else {
    echo 'Aluno reprovado';
}
