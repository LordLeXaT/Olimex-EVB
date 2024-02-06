#include <Arduino.h>
#include "OLIMEXEVB.h"

/*
  Simple IR changes sketch
*/

OLIMEXEVB evb;

void setup()
{
  evb.begin();
}

void loop()
{
    digitalWrite(evb.IRTX,true);
    delay(1000);
    digitalWrite(evb.IRTX,false);
    delay(1000);
}