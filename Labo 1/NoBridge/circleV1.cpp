#include <iostream>
#include "circleV1.h"
#include "libv1.h"

CircleV1::CircleV1(double x, double y, int radius) : Circle(x,y,radius){}

void CircleV1::drawCircle(double x, double y, int radius){
	draw_circle(x, y, radius);
}

void CircleV1::rotateAngle(double angle){
	rotate_angle(angle);
}

void CircleV1::translatePosition(double x, double y){
	translate_position(x,y);
}

void CircleV1::pushMatrix(){
	push_matrix();
}

void CircleV1::popMatrix(){
	pop_matrix();
}