#ifndef circleV1_H
#define circleV1_H

#include "circle.h"

class CircleV1 : public Circle {
    public:
        CircleV1(double, double, int);
    protected:
        virtual void drawCircle(double, double, int);
};

#endif //circleV1_H