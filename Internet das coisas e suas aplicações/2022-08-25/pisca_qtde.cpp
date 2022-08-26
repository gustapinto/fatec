int led = 13;

void pisca_led() {
    digitalWrite(led, HIGH);
    delay(500);

    digitalWrite(led, LOW);
    delay(500);
}

void setup() {
    Serial.begin(9600);

    pinMode(led, OUTPUT);
}

void loop() {
    if (Serial.available() > 0) {
        int recebido = Serial.parseInt();

        Serial.println(recebido);

        for (int i = 0; i < recebido; ++i) {
            pisca_led();
        }
    }
}
