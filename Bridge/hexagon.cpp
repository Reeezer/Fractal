#include <iostream>

#include "hexagon.h"

Hexagon::Hexagon(Drawing *drawing, int x, int y, int h, int w, float angle)
	: Shape(drawing), x(x), y(y), h(h), w(w), angle(angle)
{}

void Hexagon::draw()
{
	std::cout << "Drawing an Hexagon!" << std::endl;
}