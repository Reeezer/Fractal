#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape{

    public:
        Circle(double,double,int);
        ~Circle();
        void draw() override;
    protected:
        virtual void drawCircle(double,double,int)=0;
    private : 
        double x, y, radius;

};

#endif //CIRCLE_H