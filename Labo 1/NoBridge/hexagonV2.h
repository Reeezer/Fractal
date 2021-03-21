#ifndef HEXAGONV2_H
#define HEXAGONV2_H

#include "hexagon.h"

class HexagonV2 : public Hexagon
{
public:
	HexagonV2(double, double, int, double);
protected:
	void drawLine(double, double, double, double)override;
	void rotateAngle(double) override;
	void translatePosition(double,double) override;
	void pushMatrix() override;
	void popMatrix() override;
};

#endif // HEXAGONV2_H
