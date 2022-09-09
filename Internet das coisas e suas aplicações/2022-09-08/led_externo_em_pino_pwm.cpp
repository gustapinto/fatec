int led = 3;

// Pino PWM (pino de pulso com modulação), são os pinos marcados com ~ na placa,
// são pulsos digitais que simulam os pulsos analógicos a partir da frequência do sinal
void setup() {
    pinMode(led, OUTPUT);
}

void loop() {
    // Vai até 255 por conta da variação do led ser de 0 a 254
    for (int i = 0; i < 255; i++) {
        // analogWrite permite passar valores que não são apenas 0 e 1 para o pino,
        // utilizando comandos digitais no pino PWM simulando um pino analógico
        analogWrite(led, i);
        delay(25);
    }
}
