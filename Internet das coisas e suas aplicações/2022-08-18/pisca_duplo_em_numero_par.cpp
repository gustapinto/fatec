int led = 13;
int counter = 1;

void setup() {
    pinMode(led, OUTPUT);
}

void loop() {
    digitalWrite(led, HIGH);

    if (counter <= 10) {
        if (counter % 2 == 0) {
            delay(300);
            digitalWrite(led, LOW);

            delay(300);
            digitalWrite(led, HIGH);

            delay(300);
            digitalWrite(led, LOW);
        } else {
            delay(1000);
            digitalWrite(led, LOW);
        }

        delay(1000);
    }

    counter++;
}
