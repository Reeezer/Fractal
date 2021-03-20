#include <iostream>
#include "circleV2.h"
#include "libv2.h"

CircleV2::CircleV2(double x, double y, int radius) : Circle(x,y,radius){}

void CircleV2::drawCircle(double x, double y, int radius){
	glutDrawCircle(x, y, radius);
}

void CircleV2::rotateAngle(double angle){
	glutRotate2D(angle);
}

void CircleV2::translatePosition(double x, double y){
	glutTranslate2D(x,y);
}

void CircleV2::pushMatrix(){
	glPushMatrix();
}

void CircleV2::popMatrix(){
	glPopMatrix();
}