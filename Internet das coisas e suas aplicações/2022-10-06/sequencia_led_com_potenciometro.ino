int led_vermelho = 2;
int led_azul = 3;
int led_amarelo = 4;
int led_verde = 5;
int botao = 6;


void setup() {
    pinMode(led_vermelho, OUTPUT);
    pinMode(led_azul, OUTPUT);
    pinMode(led_amarelo, OUTPUT);
    pinMode(led_verde, OUTPUT);
    pinMode(botao, INPUT_PULLUP);
}

int led = 2;
unsigned long anterior = 0;
bool inverter = false;

void loop() {
    unsigned long atual = millis();

    if (atual > anterior + map(analogRead(A1), 0, 1023, 100, 255)) {
        int estado_led = digitalRead(led);

        digitalWrite(led, !estado_led);

        anterior = atual;

        if (estado_led) {
            if (inverter) {
                if (led == 2) {
                    led = 5;
                } else {
                    led -= 1;
                }
            } else {
                if (led == 5) {
                    led = 2;
                } else {
                    led += 1;
                }
            }
        }
    } else {
        if (digitalRead(botao) == LOW) {
            inverter = !inverter;

            digitalWrite(led, LOW);

            if (inverter) {
                led = 5;
            } else {
                led = 2;
            }
        }
    }
}
