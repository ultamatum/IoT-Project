#include <Streaming.h>
#include <iomanip>
#include<wire.h>
// -- OLED -------
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
// OLED i2c
#define OLED_RESET -1
#define SDA D4; // Used by the default Wire constructor
 // (called from Adafruit_SSD1306 default constructor)
#define SCL D3; // Need to overide defaults for
 // **** original Wemos D1 board *****
#define OLED_SCREEN_I2C_ADDRESS 0x3C
Adafruit_SSD1306 display(OLED_RESET);
void setup()
{

 Serial.begin(115200);
 Serial << endl << "Hello World" << endl;
 // -- OLED --------------
 display.begin(SSD1306_SWITCHCAPVCC, OLED_SCREEN_I2C_ADDRESS);

 display.display();
 delay(2000);
 display.clearDisplay();
 display.setCursor(0,0);
 display.setTextSize(1); // - a line is 21 chars in this size
 display.setTextColor(WHITE);
}
void loop()
{

 display.clearDisplay();
 display.setCursor(0,0);

 display << "Now is the winter" << endl;
 display << "of our discontent" << endl;
 display << "made glorious summer" << endl;
 display << "by this son of butts." << endl;

 display.display();

 delay(5000);
 display.clearDisplay();
 display.display();
 delay(5000);
}
