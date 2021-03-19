#include <iostream>

#include "drawingv1.h"

#include "circle.h"
#include "hexagon.h"
#include "rectangle.h"

int main (int argc, char **argv)
{
	Drawing *drawing = new DrawingV1();

	Shape *circle = new Circle(drawing, 200, 300, 30);
	Shape *hexagon = new Hexagon(drawing, 400, 20, 40, 40, 45.f);
	Shape *rect = new Rectangle(drawing, 100, 100, 200, 100, 45.f);

	circle->draw();
	hexagon->draw();
	rect->draw();

	delete drawing;
	delete circle;
	delete hexagon;
	delete rect;

	return 0;
}