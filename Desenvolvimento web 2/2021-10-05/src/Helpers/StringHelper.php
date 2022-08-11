<?php

class StringHelper
{
    public const CARACTERES = '0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ';

    public static function geraStringAleatoria(int $tamanho = 6): string
    {
        $aleatoria = '';

        for ($i = 0; $i < $tamanho; $i++) {
            $indice = rand(0, strlen(self::CARACTERES) - 1);

            $aleatoria .= self::CARACTERES[$indice];
        }

        return $aleatoria;
    }
}
