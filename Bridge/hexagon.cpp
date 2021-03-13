#include <iostream>

#include "hexagon.h"

Hexagon::Hexagon(Drawing *drawing, int x, int y, int h, int w)
	: Shape(drawing), x(x), y(y), h(h), w(w)
{}

void Hexagon::draw()
{
	std::cout << "Drawing an Hexagon!" << std::endl;
}