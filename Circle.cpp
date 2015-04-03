#include <math.h>
#include <iostream>
#include "Circle.h"
#include <sstream>

using namespace std;
Circle::Circle()
{
    setRadius(1.0);
}

Circle::Circle(double circleRadius)
{
    setRadius(circleRadius);
}

Circle::Circle(string circleColor, bool circleFilled, double circleRadius):Shape(circleColor, circleFilled)
{
    setRadius(circleRadius);
}

double Circle::getRadius()
{
    return radius;
}

double Circle::getArea()
{
    return 3.14 * pow(radius, 2);
}

double Circle::getPerimeter()
{
 return 2 * 3.14 * radius;
}

void Circle::setRadius(double circleRadius)
{
    radius = circleRadius;
}

string Circle::toString()
{
    stringstream out;
    out << getRadius();
    return "A circle with radius = " + out.str() + ", which is a subclass of " + Shape::toString();
}
