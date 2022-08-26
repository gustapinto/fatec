void setup() {
    // Inicia uma comunicação serial de 9600 bits/s, esse dado é importante
    // pois tanto o comunicador tanto o receptor devem estar na mesma
    // taxa de transmissão, senão as mensagens não serão inteligíveis
    Serial.begin(9600);
}

void loop() {
    // Envia uma mensagem para a porta serial, transmitindo uma série de
    // bytes (char) ASCII
    Serial.write("Hello Serial!\n");

    // Diferente do Serial.write Serial.print e Serial.println transmitem uma
    // string inteira, ao invés de um char
    Serial.println("Arduino");

    // Serial.print também possui um segundo parâmetro que permite que
    // definir a base em que a string será codificada
    Serial.println(65, HEX);

    delay(1000);
}
