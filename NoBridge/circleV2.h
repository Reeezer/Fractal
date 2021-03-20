#ifndef circleV2_H
#define circleV2_H

#include "circle.h"

class CircleV2 : public Circle {
    public:
        CircleV2(double, double, int);
    protected:
        virtual void drawCircle(double, double, int)override;
        void rotateAngle(double) override;
        void translatePosition(double,double) override;
        void pushMatrix() override;
        void popMatrix() override;
};

#endif //circleV2_H