#include "ship.h"

Ship::Ship()
{

}

Ship::Ship(int x, int y)
{
  xpos = x;
  ypos = y;
}

Ship::~Ship()
{

}

void Ship::Update()
{

}

void Ship::Draw(Adafruit_SSD1306 display)
{
  for(int i = 0; i < TEXWIDTH * TEXHEIGHT; i++)
  {
      //if(texture[i * i] == 0)
      //{
      //  return;
      //} else
      //{
          display.drawPixel(i + xpos, (i % 5) + ypos, WHITE);
      //}
  }
}
