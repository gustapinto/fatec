int led = 13;
int pir = 2;  // PIR usa uma entrada digital para indicar se está captando algo

int valor;
unsigned long agora;
unsigned long anterior;

void setup() {
    pinMode(led, OUTPUT);
    pinMode(pir, INPUT);

    Serial.begin(9600);
}

void loop() {
    // Capta o sinal digital do PIR
    valor = digitalRead(pir);

    if (valor == HIGH) {
        digitalWrite(led, HIGH);

        Serial.println("Vendo");
    } else {
        digitalWrite(led, LOW);

        Serial.println("Não vendo");
    }

    delay(100);
}
