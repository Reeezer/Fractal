#include <iostream>

#include "hexagon.h"

Hexagon::Hexagon(double x, double y, int radius, double angle) {
    this->x = x;
    this->y = y; 
    this->radius = radius;
    this->angle = angle;
}

void Hexagon::draw(){
    std::cout << "drawing a hexagon" << std::endl;
	pushMatrix();

	translatePosition(x, y);
	rotateAngle(angle);

	for (int i = 0; i < 6; i++)
	{
		//  sqrt(3) = 1.73205080757
		drawLine(-radius, 0,  -radius * 1.73205080757 / 2, -radius / 2);
		rotateAngle(3.1415 / 3);
	}

	popMatrix();  
}