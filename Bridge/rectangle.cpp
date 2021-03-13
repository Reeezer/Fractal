#include <iostream>

#include "rectangle.h"

Rectangle::Rectangle(Drawing *drawing, int x, int y, int h, int w, float angle)
	: Shape(drawing), x(x), y(y), h(h), w(w), angle(angle)
{}

void Rectangle::draw()
{
	std::cout << "Drawing a Rectangle!" << std::endl;
}