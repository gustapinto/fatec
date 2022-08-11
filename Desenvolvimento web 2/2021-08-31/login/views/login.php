<!DOCTYPE html>
<html lang="pt_BR">
<head>
    <meta charset="UTF-8">
    <title>
        Acessar
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
        <h2>Acessar</h2>

        <p>Favor inserir login e senha.</p>

        <form action="../handlers/RealizaLogin.php" method="post">
            <div class="form-group">
                <label>
                    Username
                </label>
                <input type="text" name="username" class="form-control" value="orlando">
            </div>
            <div class="form-group">
                <label>
                    Password
                </label>
                <input type="password" name="password" class="form-control" value="123mudar">
            </div>
            <div class="form-group">
                <button type="submit" class="btn btn-primary">
                    Acessar
                </button>
            </div>
        </form>
    </div>
</body>
</html>
