#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape
{
public:
	Circle(Drawing *, int, int, int);

	void draw() override;
private:

	int x, y;
	int radius;
};

#endif // CIRCLE_H
