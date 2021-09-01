<?php
require_once '../handlers/VerificaLogin.php';
?>
 
<!DOCTYPE html>
<html lang="pt_BR">
<head>
    <meta charset="UTF-8">
    <title>
        Welcome
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
    <div>
        <h1>Olá,<b> <?php echo htmlspecialchars($_SESSION["username"]); ?></b></h1>
        <h2>Bem vindo ao site</h2>

        <p>
            <a href="cadastro.php" class="btn btn-primary">
                Cadastro Pessoas
            </a>
            <br><br>
            <a href="../handlers/RealizaLogout.php" class="btn btn-danger">
                Sair da conta
            </a>
        </p>
    </div>
</body>
</html>
