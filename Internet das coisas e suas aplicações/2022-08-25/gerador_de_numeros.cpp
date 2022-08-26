int led = 13;
int contador = 0;

void pisca_led() {
    digitalWrite(led, HIGH);
    delay(500);

    digitalWrite(led, LOW);
    delay(500);
}

void setup() {
    Serial.begin(9600);

    // randomSeed Popula o gerador de números aleatórios do Arduino e a função
    // analogRead lê um valor de um pino especificado, é muito usada como seed
    // de números
    randomSeed(analogRead(0));
    pinMode(led, OUTPUT);
}

void loop() {
    if (contador < 10) {
        // random gera um número aleatório entre um número e o segundo, podendo
        // ser escrito omitindo o primeiro valor (random(100) -> random(0, 100))
        int numero = random(50, 100);

        if (numero % 2 == 0) {
            pisca_led()
        }
    } else if (contador == 10) {
        Serial.println("Acabou!");
    }

    contador++;

    delay(250);
}
