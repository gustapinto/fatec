#define PINO_TRIGGER 4
#define PINO_ECHO 5
#define VELOCIDADE_DO_SOM_CM_POR_S 0.0343

float centimetros, leitura, distancia, distanciaAtual, distanciaInicial, deltaDistancia;

float distanciaEmCm()
{
    digitalWrite(PINO_TRIGGER, LOW);
    delayMicroseconds(10);
    digitalWrite(PINO_TRIGGER, HIGH);
    delayMicroseconds(10);
    digitalWrite(PINO_TRIGGER, LOW);

    leitura = pulseIn(PINO_ECHO, HIGH);
    distancia = (leitura / 2) * VELOCIDADE_DO_SOM_CM_POR_S;

    return distancia >= 331 ? 0 : distancia;
}

void setup()
{
    pinMode(PINO_TRIGGER, OUTPUT);
    pinMode(PINO_ECHO, INPUT);

    Serial.begin(9600);

    distanciaInicial = distanciaEmCm();
}

void loop()
{
    distanciaAtual = distanciaEmCm();
    deltaDistancia = distanciaAtual - distanciaInicial;

    if (deltaDistancia >= 20 || distanciaAtual == 0) {
        Serial.println("Buraco fundo");
    } else if (deltaDistancia >= 10) {
        Serial.println("Buraco médio");
    } else if (deltaDistancia >= 5) {
        Serial.println("Buraco superficial");
    }
}
