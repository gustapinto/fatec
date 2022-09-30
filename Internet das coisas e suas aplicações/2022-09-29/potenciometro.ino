void setup() {
    Serial.begin(9600);
}

void loop() {
    // Exibe o valor do pino analógico A1 na porta serial conforme operarmos o
    // potenciometro
    Serial.println(analogRead(A1));

    delay(10);
}
