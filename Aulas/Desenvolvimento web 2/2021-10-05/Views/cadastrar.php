<html>
<head>
    <title>
        Encurtador
    </title>
</head>
<body>
    <h1>
        Encurtador de links
    </h1>

    <div>
        Cadastre um sistema e geraremos um link amigável que te redirecionará para ele!
    </div>

    <div>
        <form action="../cadastrarSistema.php" method="POST">
            <div>
                <input type="text" name="sistema" placeholder="Sistema">
            </div>
            <div>
                <input type="text" name="link-original" placeholder="Link Original">
            </div>

            <button type="submit">
                Enviar
            </button>
        </form>
    </div>
</body>
</html>
