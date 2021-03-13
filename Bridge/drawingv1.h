#ifndef DRAWINGV1_H
#define DRAWINGV1_H

#include "drawing.h"

class DrawingV1 : public Drawing
{
public:
	DrawingV1();
	~DrawingV1();

	void drawLine(int, int, int, int) override;
	void drawCircle(int, int, int) override;
};

#endif // DRAWINGV1_H
