void setup() {

    // Inicializamos el led de estado del Arduino
    pinMode(LED_BUILTIN, OUTPUT);

    // Inicializamos puertos 5 a 12 de cabecera de red
    for (int i = 5; i < 13; i++)
        pinMode(i, OUTPUT);

}

int blinky = 0;

void loop() {
        for (int i = 5; i < 13; i++) {

            // Cambiamos de pin cada segundo
            digitalWrite(i, HIGH);
            delay(1000);
            digitalWrite(i, LOW);

            // Parpadeamos el led de estado
            digitalWrite(LED_BUILTIN, ++blinky & 0x01);
        }
}
