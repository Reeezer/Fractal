#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape {
    public:
        Rectangle(double, double, double, double, double);
        virtual void draw();
    protected:
        virtual void drawLine(double, double, double, double, double);
    private:
        double x, y, w, h, angle;
};

#endif //RECTANGLE_H