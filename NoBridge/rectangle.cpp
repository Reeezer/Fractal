#include <iostream>

#include "rectangle.h"

Rectangle::Rectangle(double x, double y, double w, double h, double angle){
    this->x = x;
    this->y = y;
    this->w = w;
    this->h = h;
    this->angle = angle;
}

void Rectangle::draw(){}


void Rectangle::drawLine(double x, double y, double w, double h, double angle){}