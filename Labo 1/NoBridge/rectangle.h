#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape {
    public:
        Rectangle(double, double, double, double, double);    
        void draw() override;
    protected:
        virtual void drawLine(double, double, double, double) = 0;
    private:
        double x, y, w, h, angle;
};

#endif //RECTANGLE_H