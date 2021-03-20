#include <iostream>
#include "circleV2.h"
#include "libv2.h"

CircleV2::CircleV2(double x, double y, int radius) : Circle(x,y,radius){}

void CircleV2::drawCircle(double x, double y, int radius){
    std::cout << "drawing a circle" << std::endl;
	glPushMatrix;

	glutTranslate2D(x, y);

	glutDrawCircle(x, y, radius);

	glPopMatrix;
}