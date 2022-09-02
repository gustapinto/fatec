// Para ligar um led externo só é preciso apontar para a porta do
// arduino em que ele está conectado
int led_vermelho = 2;
int led_azul = 3;
int led_verde = 4;

void pisca_led(int led, int tempo) {
    digitalWrite(led, HIGH);
    delay(tempo);

    digitalWrite(led, LOW);
    delay(tempo);
}

void setup() {
    // Quando estamos lidando com dispositivos externos é preciso
    // definir os pinos de saída
    pinMode(led_vermelho, OUTPUT);
    pinMode(led_azul, OUTPUT);
    pinMode(led_verde, OUTPUT);
}

void loop() {
    pisca_led(led_vermelho, 250);
    pisca_led(led_azul, 250);
    pisca_led(led_verde, 250);
}
