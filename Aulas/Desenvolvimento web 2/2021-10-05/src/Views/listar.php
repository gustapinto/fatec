<html>
<head>
    <title>
        Encurtador
    </title>
</head>
<body>
    <h1>
        Sistemas cadastrados
    </h1>

    <div>
        <table>
            <thead>
                <th>
                    Sistema
                </th>
                <th>
                    Link Original
                </th>
                <th>
                    Link Encurtado
                </th>
                <th>
                    Acessos
                </th>
            </thead>
            <tbody>
                <?php
                    require_once __DIR__ . '/../Repositorios/SistemasRepositorio.php';
                    require_once __DIR__ . '/../../comandos/geraTabelaSistemas.php';
                ?>
            </tbody>
        </table>
    </div>
</body>
</html>
