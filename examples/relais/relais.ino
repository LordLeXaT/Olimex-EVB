#include <Arduino.h>
#include "OLIMEXEVB.h"

/*
  Simple relais changes sketch
*/

OLIMEXEVB evb;

void setup()
{
  evb.begin();
}

void loop()
{
    evb.relais0(true);
    evb.relais1(false);
    delay(1000);
    evb.relais0(false);
    evb.relais1(true);
    delay(1000);
}