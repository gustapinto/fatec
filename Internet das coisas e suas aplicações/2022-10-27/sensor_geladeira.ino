const int ldr = A0;
const int buzzer = 3;

bool portaEstaAberta;
unsigned long agora;
unsigned long anterior;

void setup() {
    pinMode(ldr, INPUT);
    pinMode(buzzer, OUTPUT);
}

void loop() {
    portaEstaAberta = analogRead(ldr) > 100;

    if ((millis() - anterior) > 30000) {
        if (portaEstaAberta) {
            analogWrite(buzzer, 254);
        }

        anterior = millis();
    } else {
        if (!portaEstaAberta) {
            analogWrite(buzzer, 0);
        }
    }
}
