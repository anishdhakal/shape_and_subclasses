#include <iostream>
#include "Shape.h"
using namespace std;

Shape::Shape()
{
    setColor("green");
    setFilled(true);
}

Shape::Shape(string shapeColor, bool shapeFilled)
{
    setColor(shapeColor);
    setFilled(shapeFilled);
}

string Shape::getColor()
{
    return color;
}

void Shape::setColor(string shapeColor)
{
    color = shapeColor;
}

bool Shape::isFilled()
{
    return filled;
}

void Shape::setFilled(bool shapeFilled)
{
    filled = shapeFilled;
}

string Shape::toString()
{
    string filledToString;
    filledToString = (isFilled()==true) ? "filled." : "not filled.";
    return "a shape with color of " + getColor() + " and " + filledToString;
}
