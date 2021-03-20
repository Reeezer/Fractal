#include <iostream>
#include "circleV1.h"
#include "libv1.h"

CircleV1::CircleV1(double x, double y, int radius) : Circle(x,y,radius){}

void CircleV1::drawCircle(double x, double y, int radius){
    std::cout << "drawing a circle" << std::endl;
	push_matrix();

	translate_position(x, y);

	draw_circle(x, y, radius);

	pop_matrix();
}