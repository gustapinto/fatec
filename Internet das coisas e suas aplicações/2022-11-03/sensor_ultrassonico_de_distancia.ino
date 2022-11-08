#define PINO_TRIGGER 4
#define PINO_ECHO 5
#define VELOCIDADE_DO_SOM_CM_POR_S 0.0343

float centimetros, leitura, distancia;

float distanciaEmCm()
{
    // Corta o sinal para limpar a entrada do trigger
    digitalWrite(PINO_TRIGGER, LOW);
    delayMicroseconds(10);
    // Arma o trigger setando-o como HIGH e depois definindo como LOW
    digitalWrite(PINO_TRIGGER, HIGH);
    delayMicroseconds(10);
    digitalWrite(PINO_TRIGGER, LOW);

    leitura = pulseIn(PINO_ECHO, HIGH); // Faz a leitura do pulso
    distancia = (leitura / 2) * VELOCIDADE_DO_SOM_CM_POR_S; // Divide por 2 pois conta ida e volta

    if (distancia >= 331) {
        // 331 cm é o limite de distancia
        return 0;
    }

    return distancia;
}

void setup()
{
    pinMode(PINO_TRIGGER, OUTPUT);
    pinMode(PINO_ECHO, INPUT);

    Serial.begin(9600);
}

void loop()
{
    centimetros = distanciaEmCm();

    Serial.print("Distancia cm: ");
    Serial.print(centimetros);
    Serial.println();
}
