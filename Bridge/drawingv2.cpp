#include "libv2.h"

#include "drawingv2.h"

DrawingV2::DrawingV2()
{
	// initialize library here
}

DrawingV2::~DrawingV2()
{}

void DrawingV2::push()
{
	glPushMatrix();
}
	
void DrawingV2::pop()
{
	glPopMatrix();
}

void DrawingV2::rotate(float angle)
{
	glutRotate2D(angle);
}

void DrawingV2::translate(int dx, int dy)
{
	glutTranslate2D(dx, dy);
}

void DrawingV2::drawLine(int x1, int y1, int x2, int y2)
{
	glutDrawLine(x1, y1, x2, y2);
}

void DrawingV2::drawCircle(int x, int y, int radius)
{
	glutDrawCircle(x, y, radius);
}