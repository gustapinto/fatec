int led_vermelho = 2;
int led_azul = 3;
int led_verde = 4;
int led_amarelo = 5;

char recebido = 'd';

void pisca_led(int led) {
    digitalWrite(led, HIGH);
    delay(250);

    digitalWrite(led, LOW);
    delay(250);
}

void atua_leds(int nivel) {
    for (int led = 2; led <= 5; ++led) {
        digitalWrite(led, nivel);
    }

    delay(1000);
}

void sequencial(bool inverte) {
    if (inverte) {
        for (int led = 2; led <= 5; ++led) {
            pisca_led(led);
        }
    } else {
        for (int led = 5; led >= 2; --led) {
            pisca_led(led);
        }
    }

    delay(1000);
}

void setup() {
    pinMode(led_vermelho, OUTPUT);
    pinMode(led_azul, OUTPUT);
    pinMode(led_verde, OUTPUT);
    pinMode(led_amarelo, OUTPUT);

    Serial.begin(9600);
}

void loop() {
    if (Serial.available() > 0) {
        recebido = Serial.read();

        Serial.println(recebido);
    }

    switch (recebido) {
    case 'a':
        sequencial(true);
        break;
    case 'b':
        atua_leds(LOW);
        break;
    case 'c':
        atua_leds(HIGH);
        break;
    case 'd':
        sequencial(false);
        break;
    }
}
