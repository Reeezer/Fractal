#ifndef HEXAGON_H
#define HEXAGON_H

#include "shape.h"

class Hexagon : public Shape
{
public:
	Hexagon(double,double,int,double);
	void draw();
protected:
	virtual void drawLine(double,double,int,double);
private:
	double x, y;
	int radius;
	double angle;
};

#endif // HEXAGON_H
