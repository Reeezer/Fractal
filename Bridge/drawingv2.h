#ifndef DRAWINGV2_H
#define DRAWINGV2_H

#include "drawing.h"

class DrawingV2 : public Drawing
{
public:
	DrawingV2();
	~DrawingV2();
	
	void push() override;
	void pop() override;

	void rotate(float) override;
	void translate(int, int) override;
	
	void drawLine(int, int, int, int) override;
	void drawCircle(int, int, int) override;
};

#endif // DRAWINGV2_H
