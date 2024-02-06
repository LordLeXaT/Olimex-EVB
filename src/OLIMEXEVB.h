/*
  OLIMEXEVB.h - Library for OLIMEX EVB Board.
  Created by MasterTuX, February 6, 2024.
*/

#ifndef OLIMEXEVB_h
#define OLIMEXEVB_h

#include "Config.h"
#include "Arduino.h"
#include <SPI.h>
#include "SD_MMC.h"

class OLIMEXEVB
{
  public:
  OLIMEXEVB();
  void begin();
  void relais0(bool);
  void relais1(bool);
  int IRRX;
  int IRTX;
  int BtnA;
};

#endif