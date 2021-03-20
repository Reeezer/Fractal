#include <iostream>
#include "hexagonV2.h"
#include "libv2.h"

HexagonV2::HexagonV2(double x, double y, int radius, double angle) : Hexagon(x, y, radius, angle)
{}

void HexagonV2::drawLine(double x1, double y1, double x2, double y2){
	glutDrawLine(x1,x2,y1,y2);
}

void HexagonV2::rotateAngle(double angle){
	glutRotate2D(angle);
}

void HexagonV2::translatePosition(double x, double y){
	glutTranslate2D(x,y);
}

void HexagonV2::pushMatrix(){
	glPushMatrix();
}

void HexagonV2::popMatrix(){
	glPopMatrix();
}