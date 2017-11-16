#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define TEXWIDTH 5
#define TEXHEIGHT 5

class Ship
{
  public:
    Ship();
    Ship(int x, int y);
    ~Ship();

    //Variables
    int texture [TEXWIDTH * TEXHEIGHT] =
    {
      0, 0, 1, 0, 0,
      0, 1, 1, 1, 0,
      0, 1, 1, 1, 0,
      1, 1, 1, 1, 1,
      1, 1, 1, 1, 1,
     };
    int health;
    int xpos;
    int ypos;
    float xVel;
    float yVel;
    float rotation;

    //Functions
    void Update();
    void Draw(Adafruit_SSD1306 display);
};
