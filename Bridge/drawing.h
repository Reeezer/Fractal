#ifndef DRAWING_H
#define DRAWING_H

class Drawing
{
public:
	virtual ~Drawing() = 0;

	virtual void push() = 0;
	virtual void pop() = 0;

	// angle in radians
	virtual void rotate(float) = 0;
	// dx, dy
	virtual void translate(int, int) = 0;

	// x1, y1, x2, y2
	virtual void drawLine(int, int, int, int) = 0;
	// x, y, radius
	virtual void drawCircle(int, int, int) = 0;
};

#endif // DRAWING_H
