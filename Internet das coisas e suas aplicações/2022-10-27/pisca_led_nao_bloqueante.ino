int led = 13;

unsigned long agora = 0;
unsigned long anterior = 0;

void setup() {
    pinMode(led, OUTPUT);

    // millis() obtém o tempo de execução atual da placa
    anterior = millis();
}

void loop() {
    agora = millis();

    // Espera por um segundo de forma não bloqueante
    if ((agora - anterior) > 1000) {
        // !digitalRead(led) pega o estado oposto ao atual do led,
        // piscando o mesmo
        digitalWrite(led, !digitalRead(led));

        anterior = millis();
    }
}
