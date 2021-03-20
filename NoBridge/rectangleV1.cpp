#include <iostream>

#include "rectangleV1.h"
#include "libv1.h"

RectangleV1::RectangleV1(double x, double y, double h, double w, double angle) : Rectangle(x,y,h,w,angle)
{}

void Rectangle::drawLine(double x, double y, double h, double w, double angle){
    std::cout << "drawing a rectangle" << std::endl;
	push_matrix();

	translate_position(x, y);
	rotate_angle(angle);

	draw_line(0, 0, w, 0);
	draw_line(w, 0, w, h);
	draw_line(w, h, 0, h);
	draw_line(0, h, 0, 0);

	pop_matrix();
}