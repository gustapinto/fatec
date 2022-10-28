int ldr = A0;  // Pino analógico em que o LDR está conectado
int led = 3;
int entradaLdr = 0;

void setup() {
    pinMode(ldr, INPUT);
    pinMode(led, OUTPUT);

    Serial.begin(9600);
}

void loop() {
    // Lê o LDR
    entradaLdr = analogRead(ldr);

    // Mapeia o valor do LDR para ser compatível com pino PWM
    analogWrite(led, map(entradaLdr, 0, 1023, 0, 254));

    Serial.print('LDR:');
    Serial.println(entradaLdr);

    delay(1000);
}
