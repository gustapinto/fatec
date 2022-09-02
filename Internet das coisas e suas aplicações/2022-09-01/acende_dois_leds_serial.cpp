int led_vermelho = 2;
int led_azul = 3;

void setup() {
    pinMode(led_vermelho, OUTPUT);
    pinMode(led_azul, OUTPUT);

    Serial.begin(9600);
}

void loop() {
    if (Serial.available() > 0) {
        int recebido = Serial.parseInt();

        Serial.println(recebido);

        if (recebido == 1) {
            digitalWrite(led_azul, HIGH);
        } else if (recebido == 2) {
            digitalWrite(led_vermelho, HIGH)
        }
    }
}
