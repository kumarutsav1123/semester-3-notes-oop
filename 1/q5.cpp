/*
5.Write a program to find out area or volume of an shape/object by using one function name as FUN-AREA only. If the function takes one argument then it will calculate area of a circle, two argument for area of rectangle and three argument volume of a box. If no argument is given to the function, then it will display appropriate message. 
*/

#include<iostream>
using namespace std;

void fun_area(float r);
void fun_area(float l, float b);
void fun_area(float l,float b, float h);

int main(){
    int n;
    cout << "How many arguments you want to pass : ";
    cin >> n;
    if(n==0){
        cout << "Nothing to do";
    }
    else if(n==1){
        float r;
        cout << "Enter radius : ";
        cin >> r;
        fun_area(r);
    }
    else if(n==2){
        float l,b;
        cout << "Enter length and breadth : ";
        cin >> l >> b;
        fun_area(l,b);
    }
    else if(n==3){
        float l,b,h;
        cout << "Enter length, breadth and height : ";
        cin >> l >> b >> h;
        fun_area(l,b,h);
    }
    return 0;
}

void fun_area(float r){
    float area = 3.14 * r * r;
    cout << "Area of the circle = " << area;
}

void fun_area(float l, float b){
    float area = l*b;
    cout << "Area of the rectangle = " << area;
}

void fun_area(float l,float b, float h){
    float vol = l*b*h;
    cout << "Volume of the box = " << vol;
}