#include <iostream>
#include <math.h>
using namespace std;
float area(int a, int b, int c)
{
    float t = (float)(a + b + c) / 2;
    float x = t * (t - a) * (t - b) * (t - c);
    t = sqrt(x);
    return t;
}
float area(int a)
{
    float t;
    t = (sqrt(3) / 4) * (a * a);
    return t;
}
float area(int a, int b)
{
    float t;
    t = 0.5 * ((sqrt(a * a - b * b / 4) * b));
    return t;
}
int main()
{
    int a1, b1, c1, a2, b2, a3;
    cout << "Enter sides of scalene triangles: ";
    cin >> a1 >> b1 >> c1;
    cout << "Enter sides of isosceles triangles: ";
    cin >> a2 >> b2;
    cout << "Enter side of equilateral triangles: ";
    cin >> a3;
    cout << "Area of scalene Triangle --> " << area(a1, b1, c1) << endl;
    cout << "Area of isosceles Triangle --> " << area(a2, b2) << endl;
    cout << "Area of equilateral Triangle --> " << area(a3) << endl;

    return 0;
}