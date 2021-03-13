#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape
{
public:
	Rectangle(Drawing *, int, int, int, int, float);

	void draw() override;

private:
	int x, y;
	int h, w;

	float angle;
};

#endif // RECTANGLE_H
