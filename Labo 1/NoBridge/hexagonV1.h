#ifndef HEXAGONV1_H
#define HEXAGONV1_H

#include "hexagon.h"

class HexagonV1 : public Hexagon
{
public:
	HexagonV1(double, double, int, double);
protected:
	void drawLine(double, double, double, double) override;
	void rotateAngle(double) override;
	void translatePosition(double,double) override;
	void pushMatrix() override;
	void popMatrix() override;
};

#endif // HEXAGONV1_H
