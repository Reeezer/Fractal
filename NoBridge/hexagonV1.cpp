#include <iostream>
#include "hexagonV1.h"
#include "libv1.h"

HexagonV1::HexagonV1(double x, double y, int radius, double angle) : Hexagon(x,y,radius,angle)
{}

void HexagonV1::drawLine(double x, double y, int radius, double angle){
    std::cout << "drawing a hexagon" << std::endl;
	pop_matrix;

	translate_position(x, y);
	rotate_angle(angle);

	for (int i = 0; i < 6; i++)
	{
		//  sqrt(3) = 1.73205080757
		draw_line(-radius, 0,  -radius * 1.73205080757 / 2, -radius / 2);
		rotate_angle(3.1415 / 3);
	}

	pop_matrix();    
}