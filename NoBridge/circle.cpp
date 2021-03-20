#include <iostream>
#include "circle.h"

Circle::Circle(double x, double y, int radius){
    this->x = x;
    this->y = y;
    this->radius = radius;
}

Circle::~Circle(){}

void Circle::draw(){
    std::cout << "drawing a circle" << std::endl;

	pushMatrix();

	translatePosition(x, y);

	drawCircle(x, y, radius);

	popMatrix();
}