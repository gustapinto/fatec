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

        $sistemas = $modelo->obtem('link_encurtado LIKE "%' . $uri . '"');

        if (! empty($sistemas)) {
            self::redireciona($sistemas[0]['link_original']);
        }

        self::view('erro.php');
    }
}
