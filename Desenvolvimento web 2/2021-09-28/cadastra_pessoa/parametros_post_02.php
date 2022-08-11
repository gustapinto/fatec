<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Passagem de Parâmetros via POST</title>
</head>
<body>
<?php

require_once('Models' . DIRECTORY_SEPARATOR . 'ModelPessoa.php');

function validar_post($dado_enviado) {
    if (isset($dado_enviado) && $dado_enviado != "") {
        return true;
    }

    return false;
}

if(validar_post($_POST['firstName']) and validar_post($_POST['lastName'])){
    $modelPessoa = new ModelPessoa();

    $modelPessoa->cria([
        'primeiro_nome' => $_POST['firstName'],
        'ultimo_nome' => $_POST['lastName'],
    ]);

    echo '<br><br>';
    echo 'Nome: '.$_POST['firstName'];
    echo '<br><br>';
    echo 'Sobrenome: '.$_POST['lastName'];
    /*
    Inserir os dados no banco de dados MySQL
    */
}

?>
</body>
</html>
