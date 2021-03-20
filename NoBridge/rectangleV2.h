#ifndef RECTANGLEV2_H
#define RECTANGLEV2_H

#include "rectangle.h"

class RectangleV2 : public Rectangle {
    public:
        RectangleV2(double, double, double, double, double);
    protected:
        void drawLine(double, double, double, double)override;
        void rotateAngle(double) override;
        void translatePosition(double,double) override;
        void pushMatrix() override;
        void popMatrix() override;
};

#endif //RECTANGLEV2_H