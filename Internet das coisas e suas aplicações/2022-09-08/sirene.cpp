int led_vermelho = 6;
int led_azul = 5;
int led_verde = 3;

int i = 0;

void setup() {
    pinMode(led_vermelho, OUTPUT);
    pinMode(led_azul, OUTPUT);
    pinMode(led_verde, OUTPUT);
}

void loop() {
    if (i <= 255) {
        analogWrite(led_azul, 255 - i);
        delay(50);

        analogWrite(led_vermelho, i);
        delay(50);

        int nivel_verde = (i >= 127) ? (i / 2) : ( i * 2);

        analogWrite(led_verde, nivel_verde);
        delay(50);

        i++;
    } else {
        i = 0;
    }
}
