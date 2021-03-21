#include <iostream>

#include "hexagon.h"

Hexagon::Hexagon(Drawing *drawing, int x, int y, int radius, float angle)
	: Shape(drawing), x(x), y(y), radius(radius), angle(angle)
{}

void Hexagon::draw()
{
	std::cout << "drawing a hexagon" << std::endl;
	drawing->push();

	drawing->translate(x, y);
	drawing->rotate(angle);

	for (int i = 0; i < 6; i++)
	{
		//  sqrt(3) = 1.73205080757
		drawing->drawLine(-radius, 0,  -radius * 1.73205080757 / 2, -radius / 2);
		drawing->rotate(3.1415 / 3);
	}

	drawing->pop();
}