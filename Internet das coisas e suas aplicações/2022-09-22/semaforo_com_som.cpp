int led_vermelho_1 = 1;
int led_amarelo_1 = 2;
int led_verde_1 = 3;
int led_vermelho_2 = 4;
int led_amarelo_2 = 5;
int led_verde_2 = 6;
int led_vermelho_pedestre_1 = 7;
int led_verde_pedestre_1 = 8;
int led_vermelho_pedestre_2 = 9;
int led_verde_pedestre_2 = 12;
int buzzer_1 = 11;
int buzzer_2 = 10;

void atua_led(int led, int tempo) {
    digitalWrite(led, HIGH);
    delay(tempo * 1000);
    digitalWrite(led, LOW);
}

void bip(int buzzer) {
    digitalWrite(buzzer, HIGH);
    delay(500);
    digitalWrite(buzzer, LOW);
    delay(500);
    digitalWrite(buzzer, HIGH);
    delay(500);
    digitalWrite(buzzer, LOW);
}

void setup() {
    for (int i = 1; i <= 11; i++) {
        pinMode(i, OUTPUT);
    }
}

int tempo_verde = 7;
int tempo_amarelo = 3;

void loop() {
    digitalWrite(led_vermelho_1, HIGH);
    digitalWrite(led_vermelho_pedestre_1, LOW);
    digitalWrite(led_verde_pedestre_1, HIGH);
    digitalWrite(led_vermelho_pedestre_2, HIGH);

    bip(buzzer_1);

    atua_led(led_verde_2, tempo_verde);
    atua_led(led_amarelo_2, tempo_amarelo);

    digitalWrite(led_vermelho_2, HIGH);
    digitalWrite(led_vermelho_pedestre_2, LOW);
    digitalWrite(led_verde_pedestre_2, HIGH);

    delay(2000);

    digitalWrite(led_vermelho_1, LOW);
    digitalWrite(led_vermelho_pedestre_1, HIGH);
    digitalWrite(led_verde_pedestre_1, LOW);

    bip(buzzer_2);

    atua_led(led_verde_1, tempo_verde);
    atua_led(led_amarelo_1, tempo_amarelo);
    digitalWrite(led_vermelho_1, HIGH);

    delay(2000);

    digitalWrite(led_vermelho_2, LOW);
    digitalWrite(led_vermelho_pedestre_2, HIGH);
    digitalWrite(led_verde_pedestre_2, LOW);
}
