int led = 4;
int botao = 10;

int pressionado = 0;

void setup() {
    // INPUT_PULLUP -> atua como um resitor de pullup
    pinMode(botao, INPUT_PULLUP);
    pinMode(led, OUTPUT);
}

void loop() {
    pressionado = digitalRead(botao);

    if (pressionado == LOW) {
        digitalWrite(led, HIGH);
    } else {
        digitalWrite(led, LOW);
    }
}
