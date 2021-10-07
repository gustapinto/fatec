<?php

class UrlHelper
{
    public static function geraUrl(string $uri = ''): string
    {
        $host = $_SERVER['HTTP_HOST'];

        return $host . '/' . $uri;
    }
}
