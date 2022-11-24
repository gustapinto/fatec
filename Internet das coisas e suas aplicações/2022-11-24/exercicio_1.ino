#include <Servo.h>

#define LED_LARANJA 6
#define LED_AZUL 2
#define LED_VERDE 3
#define LED_AMARELO 4
#define SERVO_MOTOR 5

unsigned int angulo;

void apagaLeds()
{
    digitalWrite(LED_LARANJA, LOW);
    digitalWrite(LED_AZUL, LOW);
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_AMARELO, LOW);
}

void setup()
{
    pinMode(LED_LARANJA, OUTPUT);
    pinMode(LED_AZUL, OUTPUT);
    pinMode(LED_VERDE, OUTPUT);
    pinMode(LED_AMARELO, OUTPUT);

    servo.attach(SERVO_MOTOR);
}

void loop()
{
    angulo = map(analogRead(A1), 0, 1023, 0, 180);
    servo.write(angulo);

    if (angulo >= 30 && angulo <= 55) {
        digitalWrite(LED_AMARELO, HIGH);
    } else if (angulo >= 70 && angulo <= 90) {
        digitalWrite(LED_VERDE, HIGH);
    } else if (angulo >= 110 && angulo <= 130) {
        digitalWrite(LED_AZUL, HIGH);
    } else if (angulo >= 140 && angulo <= 160) {
        digitalWrite(LED_LARANJA, HIGH);
    } else {
        apagaLeds();
    }
}
