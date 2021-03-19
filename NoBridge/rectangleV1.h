#ifndef RECTANGLEV1_H
#define RECTANGLEV1_H

#include "rectangle.h"

class RectangleV1 : public Rectangle {
    public:
        RectangleV1(double, double, double, double);
    protected:
        void drawLine(double, double, double, double);
};

#endif //RECTANGLEV1_H