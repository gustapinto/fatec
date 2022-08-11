<?php

class UrlHelper
{
    public static function geraUrl(string $uri = ''): string
    {
        $host = $_SERVER['HTTP_HOST'];

        return $host . '/2021-10-05?s=' . $uri;
    }
}
