#ifndef circleV2_H
#define circleV2_H

#include "circle.h"

class CircleV2 : public Circle {
    public:
        CircleV2(double, double, double);
    protected:
        virtual void drawCircle(double, double, double);
};

#endif //CircleV2