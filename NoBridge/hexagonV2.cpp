#include <iostream>
#include "hexagonV2.h"
#include "libv2.h"

HexagonV2::HexagonV2(double x, double y, int radius, double angle) : Hexagon(x, y, radius, angle)
{}

void HexagonV2::drawLine(double x, double y, int radius, double angle){
    std::cout << "drawing a hexagon" << std::endl;
	glPushMatrix;

	glutTranslate2D(x, y);
	glutRotate2D(angle);

	for (int i = 0; i < 6; i++)
	{
		//  sqrt(3) = 1.73205080757
		glutDrawLine(-radius, 0,  -radius * 1.73205080757 / 2, -radius / 2);
		glutRotate2D(3.1415 / 3);
	}

	glPopMatrix();
}