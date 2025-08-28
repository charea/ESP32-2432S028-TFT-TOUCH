#include <TFT_eSPI.h>
TFT_eSPI tft = TFT_eSPI();

void setup()
{
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_WHITE);
  // tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.drawString("Hello ESP32!", 10, 10, 4);
}

void loop() {}