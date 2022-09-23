int buzzer = 9;
int led_vermelho = 5;
int led_azul = 3;

int i = 0;
int frequencia = 50;

void setup() {
    pinMode(buzzer, OUTPUT);
    pinMode(led_vermelho, OUTPUT);
    pinMode(led_azul, OUTPUT);
}

void loop() {
    if (i <= 255) {
        analogWrite(led_azul, 255 - i);
        analogWrite(led_vermelho, i);

        i++;
    } else {
        i = 0;
    }

    tone(buzzer, 650, 750);
    delay(300);
    tone(buzzer, 900, 1000);
    delay(300);
    tone(buzzer, 650, 750);
    delay(300);
    tone(buzzer, 900, 1000);
}
