<?php
require_once '../handlers/VerificaLogin.php';
?>

<!DOCTYPE html>
<html lang="pt_BR">
<head>
    <meta charset="UTF-8">
    <title>
        Cadastrar pessoas
    </title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.css">
    <style type="text/css">
        body{
            font: 14px sans-serif;
            display: grid;
            width: 100vw;
            height: 100vh;
            place-items: center;
            text-align: center;
        }
    </style>
</head>
<body>
    <div class="wrapper">
        <h2>
            Cadastrar
        </h2>

        <form action="../handlers/Cadastrar.php" method="post">
            <div class="form-group">
                <label for="nome">
                    Nome
                </label>
                <input type="text" name="nome" class="form-control" required>
            </div>
            <div class="form-group">
                <label for="cpf">
                    CPF
                </label>
                <input type="text" name="cpf" class="form-control" required>
            </div>
            <div class="form-group">
                <button type="submit" class="btn btn-primary">
                    Salvar
                </button>
            </div>
        </form>
    </div>
</body>
</html>
