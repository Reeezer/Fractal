#include "libv2.h"

#include <iostream>
using namespace std;


void glPushMatrix()
{
	cout << "v2: matrix push" << endl;
}

void glPopMatrix()
{
	cout << "v2: matrix pop" << endl;
}

// angle in degrees
void glutRotate2D(float angle)
{
	cout << "v2: rotate " << angle << " radians" << endl;
}

// dx, dy
void glutTranslate2D(int dx, int dy)
{
	cout << "v2: translating dx: " << dx << " dy: " << dy << endl;
}

// x1, x2, y1, y2
void glutDrawLine(int x1, int y1, int x2, int y2)
{
	cout << "v2: drawing line from x1: " << x1 << " y1: " << y1 << " to x2: " << x2 << " y2: " << y2 << endl;
}

// x, y, radius
void glutDrawCircle(int x, int y , int radius)
{
	cout << "v2: drawing a circle at x: " << x << " y: " << y << " with radius: " << radius << endl;
}
