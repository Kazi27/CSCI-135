/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: E9.5

comments
comments
comments
*/

#include <iostream>
using namespace std;

class Rectangle
{
    public:
        Rectangle(double input_w, double input_h);
        double get_perimeter();
        double get_area();
        void resize(double factor);
    private:
        double width, height;
};

Rectangle::Rectangle(double input_w, double input_h)
{
    width = input_w;
    height = input_h;
}

double Rectangle::get_perimeter()
{
    double perimeter = 2 * (width + height);
    return perimeter;
}
double Rectangle::get_area()
{
    double area = (width * height);
    return area;
}

void Rectangle::resize(double factor)
{
    width = width * factor;
    height = height * factor;
}