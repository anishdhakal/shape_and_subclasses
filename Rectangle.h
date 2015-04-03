using namespace std;
#include "Shape.h"
#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle: public Shape{
    private:
        double width;
        double length;

    public:
        Rectangle();
        Rectangle(double, double);
        Rectangle(string, bool,double, double);
        void setWidth(double);
        void setLength(double);
        double getWidth();
        double getLength();
        double getArea();
        double getPerimeter();
        string toString();

};
#endif
