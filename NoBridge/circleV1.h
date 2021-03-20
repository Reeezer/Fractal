#ifndef circleV1_H
#define circleV1_H

#include "circle.h"

class CircleV1 : public Circle {
    public:
        CircleV1(double, double, int);
    protected:
        void drawCircle(double, double, int) override;
        void rotateAngle(double) override;
        void translatePosition(double,double) override;
        void pushMatrix() override;
        void popMatrix() override;
};

#endif //circleV1_H