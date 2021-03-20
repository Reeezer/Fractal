#ifndef RECTANGLEV2_H
#define RECTANGLEV2_H

#include "rectangle.h"

class RectangleV2 : public Rectangle {
    public:
        RectangleV2(double, double, double, double, double);
    protected:
        void drawLine(double, double, double, double, double);
};

#endif //RECTANGLEV2_H