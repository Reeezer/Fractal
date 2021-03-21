#ifndef RECTANGLEV1_H
#define RECTANGLEV1_H

#include "rectangle.h"

class RectangleV1 : public Rectangle {
    public:
        RectangleV1(double, double, double, double, double);
    protected:
        void drawLine(double, double, double, double) override;
        void rotateAngle(double) override;
        void translatePosition(double,double) override;
        void pushMatrix() override;
        void popMatrix() override;
};

#endif //RECTANGLEV1_H