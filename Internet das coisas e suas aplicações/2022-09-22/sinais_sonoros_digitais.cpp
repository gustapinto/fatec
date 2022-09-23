int buzzer = 9;

void setup() {
    pinMode(buzzer, OUTPUT);
}

void loop() {
    // digitalWrite atua o buzzer em seu máximo/mínimo
    digitalWrite(buzzer, HIGH);
    delay(1000);

    digitalWrite(buzzer, LOW);
    delay(1000);
}
