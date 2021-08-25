<?php

$filename = 'teste.txt';

$handle = file_exists($filename)  // Verifica se o arquivo existe
    ? fopen($filename, 'a')  // Se ele existir o salva
    : fopen($filename, 'w');  // Se ele não existir cria o arquivo

fwrite($handle, 'Conteúdo\n');  // Escreve uma string no arquivo

fflush($handle);  // Atualiza o arquivo com as mudanças

fclose($handle);  // Fecha o arquivo

$handle = fopen('teste.txt', 'r');  // Abre o arquivo no modo de leitura

// Percorre o arquivo usando um loop, exibindo cada linha
while (! feof($handle)) {
    echo fgets($handle) .'<br>';
}

fclose($handle);
