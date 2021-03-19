#ifndef HEXAGON_H
#define HEXAGON_H

#include "shape.h"

class Hexagon : public Shape
{
public:
	Hexagon(double,double,double,double,double);
	void draw();
protected:
	virtual void drawLine(double,double,double,double);
private:
	double x, y;
	double h, w;
	double angle;
};

#endif // HEXAGON_H
