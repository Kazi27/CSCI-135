/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: HW E7.18

comments
comments
comments
*/

#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    double x, y;
};

struct Triangle
{
    Point A,B,C;
};

double distance(Point a, Point b)
{
  return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

double perimeter(Triangle x)
{
    double perimeter = distance(x.A, x.B) + distance(x.B, x.C) + distance(x.C, x.A);
    return perimeter;
}

int main()
{
    Point a,b,c;
    cout << "Enter two coordinates for point a: " << endl;
    cin >> a.x >> a.y;
    cout << "Enter two coordinates for point b: " << endl;
    cin >> b.x >> b.y;
    cout << "Enter two coordinates for point c: " << endl;
    cin >> c.x >> c.y;
    Triangle d = {a,b,c};
    perimeter(d);
    cout << perimeter;
}