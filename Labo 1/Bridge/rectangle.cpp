#include <iostream>

#include "rectangle.h"

Rectangle::Rectangle(Drawing *drawing, int x, int y, int h, int w, float angle)
	: Shape(drawing), x(x), y(y), h(h), w(w), angle(angle)
{}

void Rectangle::draw()
{
	std::cout << "drawing a rectangle" << std::endl;
	drawing->push();

	drawing->translate(x, y);
	drawing->rotate(angle);

	drawing->drawLine(0, 0, w, 0);
	drawing->drawLine(w, 0, w, h);
	drawing->drawLine(w, h, 0, h);
	drawing->drawLine(0, h, 0, 0);

	drawing->pop();
}