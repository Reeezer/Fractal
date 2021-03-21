#include <iostream>

#include "rectangle.h"

Rectangle::Rectangle(double x, double y, double w, double h, double angle){
    this->x = x;
    this->y = y;
    this->w = w;
    this->h = h;
    this->angle = angle;
}

void Rectangle::draw(){
    std::cout << "drawing a rectangle" << std::endl;    
    pushMatrix();

    translatePosition(x,y);
    rotateAngle(angle);

    drawLine(0, 0, w, 0);
	drawLine(w, 0, w, h);
	drawLine(w, h, 0, h);
	drawLine(0, h, 0, 0);

    popMatrix();
}
