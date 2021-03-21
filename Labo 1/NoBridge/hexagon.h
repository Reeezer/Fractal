#ifndef HEXAGON_H
#define HEXAGON_H

#include "shape.h"

class Hexagon : public Shape
{
public:
	Hexagon(double,double,int,double);
	void draw() override;
protected:
	virtual void drawLine(double, double, double, double) = 0;
private:
	double x, y;
	int radius;
	double angle;
};

#endif // HEXAGON_H
