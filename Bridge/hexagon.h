#ifndef HEXAGON_H
#define HEXAGON_H

#include "shape.h"

class Hexagon : public Shape
{
public:
	Hexagon(Drawing *, int, int, int, int);

	void draw() override;

private:
	int x, y;
	int h, w;
};

#endif // HEXAGON_H
