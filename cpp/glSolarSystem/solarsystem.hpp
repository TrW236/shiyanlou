#ifndef solarsystem_hpp
#define solarsystem_hpp

#include <GL/glut.h>
#include "stars.hpp"

#define STARS_NUM 10

enum STARS {
  Sun, Mercury, Venus, Earth, Moon, Mars, Jupiter, Saturn, Uranus, Neptune
};

class SolarSystem {
public:
  SolarSystem();
  ~SolarSystem();

  void onDisplay();
  void onUpdate();
  void onKeyboard(unsigned char key, int x, int y);

private:
  Star *stars[STARS_NUM];

  GLdouble viewX, viewY, viewZ;
  GLdouble centerX, centerY, centerZ;
  GLdouble upX, upY, upZ;
};

#endif /* solarsystem_hpp */
