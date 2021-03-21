#ifndef HEXAGON_H
#define HEXAGON_H

#include "shape.h"

class Hexagon : public Shape
{
public:
	Hexagon(Drawing *, int, int, int, float);

	void draw() override;

private:
	int x, y;
	int radius;
	float angle;
};

#endif // HEXAGON_H
