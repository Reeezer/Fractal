#include "libv1.h"

#include <iostream>
using namespace std;


void push_matrix()
{
	cout << "v1: matrix push" << endl;
}

void pop_matrix()
{
	cout << "v1: matrix pop" << endl;
}

// angle in degrees
void rotate_angle(float angle)
{
	cout << "v1: rotate " << angle << " degrees" << endl;
}
// dx, dy
void translate_position(int dx, int dy)
{
	cout << "v1: translating dx: " << dx << " dy: " << dy << endl;
}

// x1, x2, y1, y2
void draw_line(int x1, int x2, int y1, int y2)
{
	cout << "v1: drawing line with x1: " << x1 << " x2: " << x2 << " y1: " << y1 << " y2: " << y2 << endl;
}

// x, y, radius
void draw_circle(int x, int y , float radius)
{
	cout << "v1: drawing a circle at x: " << x << " y: " << y << " with radius: " << radius << endl;
}
