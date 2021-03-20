#include <iostream>

#include "rectangleV2.h"
#include "libv2.h"

RectangleV2::RectangleV2(double x, double y, double w, double h, double angle) : Rectangle(x,y,w,h,angle)
{}

void Rectangle::drawLine(double x, double y, double w, double h, double angle){
    std::cout << "drawing a rectangle" << std::endl;
	glPushMatrix();

	glutTranslate2D(x, y);
	glutRotate2D(angle);

	glutDrawLine(0, 0, w, 0);
	glutDrawLine(w, 0, w, h);
	glutDrawLine(w, h, 0, h);
	glutDrawLine(0, h, 0, 0);

	glPopMatrix;
}