int buzzer = 9;
int frequencia = 50;

void setup() {
    pinMode(buzzer, OUTPUT);
}

void loop() {
    // tone(pino, frequencia, tempo) atua o buzzer de forma analógica,
    // permitindo ajustar sua frequência
    tone(buzzer, frequencia, 500);

    frequencia++;

    if (frequencia == 1000) {
        frequencia = 200;
    }
}
