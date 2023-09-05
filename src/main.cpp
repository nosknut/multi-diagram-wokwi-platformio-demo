#include <Arduino.h>

const int BUTTON_1 = 2;
const int LED_1 = 5;

#ifdef TWO_LEDS
const int LED_2 = 10;
const int BUTTON_2 = 13;
#endif

void setup()
{
    pinMode(BUTTON_1, INPUT);
    pinMode(LED_1, OUTPUT);

#ifdef TWO_LEDS
    pinMode(BUTTON_2, INPUT);
    pinMode(LED_2, OUTPUT);
#endif
}

void loop()
{
    digitalWrite(LED_1, digitalRead(BUTTON_1));

#ifdef TWO_LEDS
    digitalWrite(LED_2, digitalRead(BUTTON_2));
#endif
}
