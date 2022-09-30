int botao = 2;
int led = 13;

int pressionado = 0;

void setup() {
    pinMode(led, OUTPUT);
    pinMode(botao, INPUT); // Define
}

void loop() {
    // digitalRead(...) recebe uma input digital (0 ou 1)
    pressionado = digitalRead(botao);

    if (pressionado == HIGH) {
        digitalWrite(led, HIGH);
    } else {
        digitalWrite(led, LOW);
    }
}
