<?php

class Pessoa
{
    public float $altura;
    public int $idade;
    public string $nome;
    public float $peso;

    const MENSAGENS = [
        '(silêncio)',
        'Mano, não sei nem que eu sou mais',
        'Penso, logo desisto',
        'Que horas começa isso?',
        'O que vai ter pra comer?',
        'Ouvi falar que o tio da madrinha do padrastro ...',
    ];

    public function __construct(
        float $altura,
        int $idade,
        string $nome,
        float $peso
    ) {
        $this->altura = $altura;
        $this->idade = $idade;
        $this->nome = $nome;
        $this->peso = $peso;
    }

    public function descreve(): void
    {
        print('Nome: ' . $this->nome . '<br>');
        print('Idade: ' . $this->idade . '<br>');
        print('Altura: ' . $this->altura . '<br>');
        print('Peso: ' . $this->peso . '<br>');
    }

    public function fala(): void
    {
        $mensagem = self::MENSAGENS[array_rand(self::MENSAGENS)];

        print($this->nome . ' diz: ' . $mensagem . '<br><br>');
    }
}
