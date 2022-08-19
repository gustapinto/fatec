// Led 13 é o padrão de interação do arduino, LED_BUILTIN é uma
// constante com o mesmo valor
int led = 13;


// setup é a função obrigatória que define as configurações
// da placa
void setup() {
    pinMode(led, OUTPUT);
}

// loop é a função obrigatória que atua como o ponto de entrada para
// o loop de eventos da placa
void loop() {
    // Liga o led, HIGH é uma constante para 1
    digitalWrite(led, HIGH);
    delay(1000);

    // Desliga o led, LOW é uma constante para 0
    digitalWrite(led, LOW);
    delay(1000);
}
