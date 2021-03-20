#ifndef HEXAGONV1_H
#define HEXAGONV1_H

#include "hexagon.h"

class HexagonV1 : public Hexagon
{
public:
	HexagonV1(double, double, int, double);

	virtual void drawLine(double, double, int, double);
};

#endif // HEXAGONV1_H
