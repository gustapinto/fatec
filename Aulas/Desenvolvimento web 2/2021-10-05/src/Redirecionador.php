<?php

require_once('Modelos/SistemasModelo.php');

class Redirecionador
{
    public static function redireciona(string $pagina): void
    {
        header('Location: ' . $pagina);
    }

    public static function view(string $view): void
    {
        self::redireciona('/2021-10-05/src/Views/' . $view);
    }

    public static function link(string $uri): void
    {
        $modelo = new SistemasModelo();

        $sistema = $modelo->obtem('link_encurtado LIKE "%' . $uri . '"')[0];

        self::redireciona($sistema['link_original']);
    }
}
