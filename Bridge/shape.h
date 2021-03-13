#ifndef SHAPE_H
#define SHAPE_H

#include "drawing.h"

class Shape
{
public:
	Shape(Drawing *);
	virtual ~Shape() = 0;
	
	virtual void draw() = 0;
protected:
	Drawing *drawing;
};

#endif // SHAPE_H
