/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: HW E7.16

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

double distance(Point a, Point b)
{
  return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main()
{
    Point a,b;
    cout << "Enter x and y coordinates for point a: " << endl;
    cin >> a.x >> a.y;
    cout << "Enter x and y coordinates for point b: " << endl;
    cin >> b.x >> b.y;
    //cout << "value of a.x is " << a.x << endl;
    //cout << "value of a.y is " << a.y << endl;
    distance(a,b);
}
