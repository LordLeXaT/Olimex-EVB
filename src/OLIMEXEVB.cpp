#include "Arduino.h"
#include "OLIMEXEVB.h"
#include "SD_MMC.h"

// settig String array for different Card Types
String CType[5] = {"NONE", "MMC", "SDSC", "SDHC", "UNKNOWN"};
int IRRX;
int IRTX;
int BtnA;

OLIMEXEVB::OLIMEXEVB()
{
}

void OLIMEXEVB::begin()
{
  pinMode(BUTTON, INPUT);
  pinMode(RELAY0, OUTPUT);
  pinMode(RELAY1, OUTPUT);
  pinMode(IR_TX, OUTPUT);
  if (!SD_MMC.begin("/sdcard", true))
  {
    Serial.println("Card Mount Failed");
    return;
  }
  // reading cardtype
  uint8_t cardType = SD_MMC.cardType();
  // reding cardsize (calculated to MiB)
  uint64_t cardSize = SD_MMC.cardSize() / (1024 * 1024);

  // Printing Type and Size of SD/MMC Card
  Serial.println("This Card Type is a: " + CType[cardType]);
  Serial.printf("SD_MMC Card Size: %lluMiB\n", cardSize);
  IRRX = IR_RX;
  IRTX = IR_TX;
  BtnA = BUTTON;
}

void OLIMEXEVB::relais0(bool state)
{
  digitalWrite(RELAY0, state);
}

void OLIMEXEVB::relais1(bool state)
{
  digitalWrite(RELAY1, state);
}