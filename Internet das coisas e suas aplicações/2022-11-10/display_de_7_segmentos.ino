#define PINO_A 2
#define PINO_LED 13

void setup() {
    pinMode(PINO_A, OUTPUT);
    pinMode(PINO_LED, OUTPUT);
}

void loop() {
    // O pino do segmento apaga com HIGH e acende com LOW
    digitalWrite(PINO_A, HIGH); // Apagando
    digitalWrite(PINO_LED, HIGH);

    delay(1000);

    digitalWrite(PINO_A, LOW); // Acendendo
    digitalWrite(PINO_LED, LOW);

    delay(1000);
}
