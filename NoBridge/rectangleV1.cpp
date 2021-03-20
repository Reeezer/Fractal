#include <iostream>

#include "rectangleV1.h"
#include "libv1.h"

RectangleV1::RectangleV1(double x, double y, double h, double w, double angle) : Rectangle(x,y,h,w,angle)
{}

void RectangleV1::drawLine(double x1, double y1, double x2, double y2){
    draw_line(x1,x2,y1,y2);
}

void RectangleV1::rotateAngle(double angle){
	rotate_angle(angle);
}

void RectangleV1::translatePosition(double x, double y){
	translate_position(x,y);
}

void RectangleV1::pushMatrix(){
	push_matrix();
}

void RectangleV1::popMatrix(){
	pop_matrix();
}