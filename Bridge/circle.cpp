#include <iostream>

#include "circle.h"

Circle::Circle(Drawing *drawing, int x, int y, int radius)
	: Shape(drawing), x(x), y(y), radius(radius)
{
}

void Circle::draw()
{
	std::cout << "drawing a circle" << std::endl;
	drawing->push();

	drawing->translate(x, y);

	drawing->drawCircle(x, y, radius);

	drawing->pop();
}