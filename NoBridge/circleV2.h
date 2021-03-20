#ifndef circleV2_H
#define circleV2_H

#include "circle.h"

class CircleV2 : public Circle {
    public:
        CircleV2(double, double, int);
    protected:
        virtual void drawCircle(double, double, int);
};

#endif //CircleV2