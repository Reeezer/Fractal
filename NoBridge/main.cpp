#include <iostream>
#include "shape.h"
#include "rectangleV1.h"
#include "rectangleV2.h"
#include "circleV1.h"
#include "circleV2.h"
#include "hexagonV1.h"
#include "hexagonV2.h"

int main (int argc, char **argv)
{
	Shape *circle = new CircleV1(200, 300, 30);
	Shape *hexagon = new HexagonV1(20, 20, 40, 40);
	Shape *rect = new RectangleV1(100, 100, 200, 100, 45.f);

	circle->draw();
	hexagon->draw();
	rect->draw();

	delete circle;
	delete hexagon;
	delete rect;

	return 0;
}