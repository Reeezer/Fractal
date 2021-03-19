#ifndef HEXAGONV2_H
#define HEXAGONV2_H

#include "hexagon.h"

class HexagonV2 : public Hexagon
{
public:
	HexagonV2(double, double, double, double, double);

	virtual void drawLine(double, double, double, double);
};

#endif // HEXAGONV2_H
