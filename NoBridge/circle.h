#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape{

    public:
        Circle(double x, double y, double r);
        ~Circle();
        void draw();
    
    protected:
        void drawCircle(double x, double y, double r);

    private : 
        double x, y, r;

};

#endif //CIRCLE_H