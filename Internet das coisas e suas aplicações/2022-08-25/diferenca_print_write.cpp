int recebido = 0;

void setup() {
    Serial.begin(9600);
}

void loop() {
    if (Serial.available() > 0 ) {
        recebido = Serial.read();

        // A principal diferença entre Serial.print e Serial.write é que o
        // primeiro mostra o código ASCII do char digitado, enquanto o segundo
        // exibe o valor real
        Serial.print(recebido); // Mostra a representação ASCII
        Serial.write(" - ");
        Serial.write(recebido); // Mostra o valor do char
        Serial.write("\n");
    }
}
