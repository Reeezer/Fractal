#include <iostream>
#include "hexagonV1.h"
#include "libv1.h"

HexagonV1::HexagonV1(double x, double y, int radius, double angle) : Hexagon(x,y,radius,angle)
{}

void HexagonV1::drawLine(double x1, double y1, double x2, double y2){    
	draw_line(x1,x2,y1,y2); 
}

void HexagonV1::rotateAngle(double angle){
	rotate_angle(angle);
}

void HexagonV1::translatePosition(double x, double y){
	translate_position(x,y);
}

void HexagonV1::pushMatrix(){
	push_matrix();
}

void HexagonV1::popMatrix(){
	pop_matrix();
}