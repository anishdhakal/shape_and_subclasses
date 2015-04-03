#include <iostream>
#include "Square.h"
#include <sstream>
using namespace std;

Square::Square():Rectangle()
{

}

Square::Square(double side):Rectangle(side, side)
{

}


Square::Square( string color, bool filled, double side):Rectangle(color, filled, side, side)
{

}

double Square::getSide()
{
    return Rectangle::getLength();
}

void Square::setSide(double side)
{
    Rectangle::setLength(side);
}

string Square::toString()
{
    stringstream side;
    side << Rectangle::getLength();
    return "A square with side = " + side.str() + " which is a subclass of " + Rectangle::toString();
}
