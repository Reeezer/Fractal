#ifndef DRAWING_H
#define DRAWING_H

class Drawing
{
public:
	virtual ~Drawing() = 0;

	virtual void drawLine(int, int, int, int) = 0;
	virtual void drawCircle(int, int, int) = 0;
};

#endif // DRAWING_H
