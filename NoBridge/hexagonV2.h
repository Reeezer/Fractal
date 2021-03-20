#ifndef HEXAGONV2_H
#define HEXAGONV2_H

#include "hexagon.h"

class HexagonV2 : public Hexagon
{
public:
	HexagonV2(double, double, int, double);

	virtual void drawLine(double, double, int, double);
};

#endif // HEXAGONV2_H
