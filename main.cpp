#include <iostream>
#include <string>
#include <sstream>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"


void forRectangle(string &color, bool &filled, double &length, double &width);
void forShape(string &color, bool &filled);
void forCircle(string &color, bool &filled, double &radius);
void forSquare(string &color, bool &filled, double &side);

using namespace std;

int main()
{
    string color;
    char choice;
    bool filled;
    double radius, side, length, width;
    cout << "Which Shape: " << endl;
    cout << " Press c for Circle, r for Rectangle & s for Square." << endl;
    cin >> choice;
    switch (tolower(choice)){
    case 's':
    {
    forSquare(color, filled, side);
    Square newSquare(color, filled, side);
    cout << newSquare.toString() << endl;
    break;
    }
    case 'r':
    {
    forRectangle(color, filled, width, length);
    Rectangle newRectangle(color, filled, width, length);
    cout << newRectangle.toString() << endl;
    break;
    }
    case 'c':
    {
    forCircle(color, filled, radius);
    Circle newCircle(color, filled, radius);
    cout << newCircle.toString() << endl;
    break;
    }
    default:
    cout << "Unknown shape.";
    }
}


void forShape(string &color, bool &filled){
    cout << "Enter the color: ";
    cin >> color;
    cout << "Is it filled? (1 for Yes/ 0 for No) ";
    cin >> filled;
}

void forCircle(string &color, bool &filled, double &radius){
    cout << "Enter the radius: ";
    cin >> radius;
    forShape(color, filled);
}

void forSquare(string &color, bool &filled, double &side){
    cout << "Enter length of the side: ";
    cin >> side;
    forShape(color, filled);
}

void forRectangle(string &color, bool &filled, double &length, double &width){
    cout << "Enter length of the side: "<<endl;
    cin >> length;
    cout << "Enter width of the side: "<<endl;
    cin >> width;
    forShape(color, filled);
}
