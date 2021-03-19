#include "libv1.h"

#include "drawingv1.h"

DrawingV1::DrawingV1()
{
	// initialize library here
}

DrawingV1::~DrawingV1()
{}


void DrawingV1::push()
{
	push_matrix();
}
	
void DrawingV1::pop()
{
	pop_matrix();
}

void DrawingV1::rotate(float angle)
{
	rotate_angle(180 * angle / 3.1415);
}

void DrawingV1::translate(int dx, int dy)
{
	translate_position(dx, dy);
}

void DrawingV1::drawLine(int x1, int y1, int x2, int y2)
{
	draw_line(x1, x2, y1, y2);
}

void DrawingV1::drawCircle(int x, int y, int radius)
{
	draw_circle(x, y, (float) radius);
}