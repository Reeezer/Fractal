#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape{

    public:
        Circle(double,double,int);
        ~Circle();
        void draw();
    
    protected:
        void drawCircle(double,double,int);

    private : 
        double x, y, radius;

};

#endif //CIRCLE_H