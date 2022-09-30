int btn_do = 3;
int btn_re = 4;
int btn_mi = 5;
int btn_fa = 6;
int btn_sol = 7;
int btn_la = 8;
int btn_si = 9;
int btn_do_2 = 10;
int buzzer = 11;

void setup() {
    pinMode(buzzer, OUTPUT);

    // Seta o pin mode de todos os botões
    for (int btn = 3; btn <= 10; btn++) {
        pinMode(btn, INPUT_PULLUP);
    }
}

void loop() {
    if (digitalRead(btn_do) == LOW) {
        tone(buzzer, 2112, 157.14);
    }

    if (digitalRead(btn_re) == LOW) {
        tone(buzzer, 2369.7, 157.14);
    }

    if (digitalRead(btn_mi) == LOW) {
        tone(buzzer, 2661.1, 157.14);
    }

    if (digitalRead(btn_fa) == LOW) {
        tone(buzzer, 2819.5, 157.14);
    }

    if (digitalRead(btn_sol) == LOW) {
        tone(buzzer, 1581.9, 183.33);
    }

    if (digitalRead(btn_la) == LOW) {
        tone(buzzer, 3552.4, 157.14);
    }

    if (digitalRead(btn_si) == LOW) {
        tone(buzzer, 3987.5, 157.14);
    }

    if (digitalRead(btn_do_2) == LOW) {
        tone(buzzer, 4224, 157.14);
    }
}
