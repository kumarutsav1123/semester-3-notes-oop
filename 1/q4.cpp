/*
4.Write a program to find out the area of a circle and volume of a sphere by using function overloading concept. (Use one function name as AREA-VOL) 
*/

#include<iostream>
using namespace std;

void result(int r);
void result(float r);

int main(){
    int r;
    cout << "\nEnter radius of the circle : ";
    cin >> r;
    result(r);

    cout<< "\nEnter radius of the sphere : ";
    cin >> r;
    float rad = (float)r;
    result(rad);

    return 0;
}

void result(int r){
    float area = 3.14 * r * r;
    cout << "Area of the circle = " << area;
}

void result(float r){
    float vol = (4 * 3.14 * r * r * r)/3;
    cout << "Volume of the sphere = " << vol;
}