#ifndef SHAPE_H
#define SHAPE_H

class Shape {

    public:
        virtual ~Shape() = 0;        
        virtual void draw() = 0;
        virtual void rotateAngle(double) = 0;
        virtual void translatePosition(double, double) = 0;
        virtual void pushMatrix() = 0;
        virtual void popMatrix() = 0;

};

#endif //SHAPE_H