#define PINO_A 1
#define PINO_B 2
#define PINO_C 3
#define PINO_D 4
#define PINO_E 5
#define PINO_F 6
#define PINO_G 7

int contador;

void limpa()
{
    digitalWrite(PINO_A, HIGH);
    digitalWrite(PINO_B, HIGH);
    digitalWrite(PINO_C, HIGH);
    digitalWrite(PINO_D, HIGH);
    digitalWrite(PINO_E, HIGH);
    digitalWrite(PINO_F, HIGH);
    digitalWrite(PINO_G, HIGH);
}

void zero()
{
    digitalWrite(PINO_A, LOW);
    digitalWrite(PINO_B, LOW);
    digitalWrite(PINO_C, LOW);
    digitalWrite(PINO_D, LOW);
    digitalWrite(PINO_E, LOW);
    digitalWrite(PINO_F, LOW);
}

void um()
{
    digitalWrite(PINO_B, LOW);
    digitalWrite(PINO_C, LOW);
}

void dois()
{
    digitalWrite(PINO_A, LOW);
    digitalWrite(PINO_B, LOW);
    digitalWrite(PINO_D, LOW);
    digitalWrite(PINO_E, LOW);
    digitalWrite(PINO_G, LOW);
}

void tres()
{
    digitalWrite(PINO_A, LOW);
    digitalWrite(PINO_B, LOW);
    digitalWrite(PINO_C, LOW);
    digitalWrite(PINO_D, LOW);
    digitalWrite(PINO_G, LOW);
}

void quatro()
{
    digitalWrite(PINO_B, LOW);
    digitalWrite(PINO_C, LOW);
    digitalWrite(PINO_F, LOW);
    digitalWrite(PINO_G, LOW);
}

void cinco()
{
    digitalWrite(PINO_A, LOW);
    digitalWrite(PINO_C, LOW);
    digitalWrite(PINO_D, LOW);
    digitalWrite(PINO_F, LOW);
    digitalWrite(PINO_G, LOW);
}

void seis()
{
    digitalWrite(PINO_A, LOW);
    digitalWrite(PINO_C, LOW);
    digitalWrite(PINO_D, LOW);
    digitalWrite(PINO_E, LOW);
    digitalWrite(PINO_F, LOW);
    digitalWrite(PINO_G, LOW);
}

void sete()
{
    digitalWrite(PINO_A, LOW);
    digitalWrite(PINO_B, LOW);
    digitalWrite(PINO_C, LOW);
}

void oito()
{
    digitalWrite(PINO_A, LOW);
    digitalWrite(PINO_B, LOW);
    digitalWrite(PINO_C, LOW);
    digitalWrite(PINO_D, LOW);
    digitalWrite(PINO_E, LOW);
    digitalWrite(PINO_F, LOW);
    digitalWrite(PINO_G, LOW);
}

void nove()
{
    digitalWrite(PINO_A, LOW);
    digitalWrite(PINO_B, LOW);
    digitalWrite(PINO_C, LOW);
    digitalWrite(PINO_F, LOW);
    digitalWrite(PINO_G, LOW);
}

void exibeNumero(int numero)
{
    switch (contador) {
    case 0:
        return zero();
    case 1:
        return um();
    case 2:
        return dois();
    case 3:
        return tres();
    case 4:
        return quatro();
    case 5:
        return cinco();
    case 6:
        return seis();
    case 7:
        return sete();
    case 8:
        return oito();
    case 9:
        return nove();
    }
}

void setup()
{
    pinMode(PINO_A, OUTPUT);
    pinMode(PINO_B, OUTPUT);
    pinMode(PINO_C, OUTPUT);
    pinMode(PINO_D, OUTPUT);
    pinMode(PINO_E, OUTPUT);
    pinMode(PINO_F, OUTPUT);
    pinMode(PINO_G, OUTPUT);
}

void loop()
{
    limpa();
    delay(250);

    if (contador <= 9) {
        exibeNumero(contador);
        delay(1000);

        contador++;
    } else {
        contador = 0;
    }
}
