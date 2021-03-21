#include <iostream>

#include "rectangleV2.h"
#include "libv2.h"

RectangleV2::RectangleV2(double x, double y, double w, double h, double angle) : Rectangle(x,y,w,h,angle)
{}

void RectangleV2::drawLine(double x1, double y1, double x2, double y2){
	glutDrawLine(x1,x2,y1,y2);
}

void RectangleV2::rotateAngle(double angle){
	glutRotate2D(angle);
}

void RectangleV2::translatePosition(double x, double y){
	glutTranslate2D(x,y);
}

void RectangleV2::pushMatrix(){
	glPushMatrix();
}

void RectangleV2::popMatrix(){
	glPopMatrix();
}