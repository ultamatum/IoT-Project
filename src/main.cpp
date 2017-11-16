#include <Streaming.h>
#include <iomanip>

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>

#include <Ship.h>

//------- OLED INFO --------
#define OLED_RESET -1
#define SDA D4;                             //Data wire for screen
#define SCL D3;                             //Clock wire for screen
#define OLED_SCREEN_I2C_ADDRESS 0x3c        //Allocate memory for screen info

Adafruit_SSD1306 display(OLED_RESET);
Ship ship(20, 25);;

void setup()
{
  Serial.begin(115200);
  Serial << endl << "I LIVE!!" << endl;

  //------------ OLED INIT ---------------
  display.begin(SSD1306_SWITCHCAPVCC, OLED_SCREEN_I2C_ADDRESS);

  display.display();
  delay(2000);
  display.clearDisplay();
  display.setCursor(0, 0);
  display.setTextSize(1);
  display.setTextColor(WHITE);

  //---------- GAME INIT ----------------
}

void loop()
{
  display.clearDisplay();
  display.setCursor(0, 0);

  ship.Draw(display);

  display.display();
  delay(5000);
}
