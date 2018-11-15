/*
 * ritari.cpp - kirjasto Hasselhofille.
 * Tekijä: Dan 2018.
 * Ihan sama kuka käyttää, vittuako kiinnostaa...
 */

#include "Arduino.h"
#include "ritari.h"

ritari::ritari(int pin)
{
    pinMode(pin, OUTPUT);
    _pin = pin;
}

void ritari::dot()
{
    digitalWrite(_pin, HIGH);
    delay(60);
    digitalWrite(_pin, LOW);
    delay(40);
}

void ritari::dash()
{
    digitalWrite(_pin, HIGH);
    delay(300);
    digitalWrite(_pin, LOW);
    delay(500);
}

