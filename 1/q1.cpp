/*
Lab 2 Assignment


1.Write a program in to find size of fundamental data types in C++ language.

2.Write a program in to check whether a number is prime or not.


3.Write a program to demonstrate the concept of call-by-value, call-by-reference & call-by address by taking swapping of two numbers as an example.


4.Write a program to find out the area of a circle and volume of a sphere by using function overloading concept. (Use one function name as AREA-VOL) 

5.Write a program to find out area or volume of an shape/object by using one function name as FUN-AREA only. If the function takes one argument then it will calculate area of a circle, two argument for area of rectangle and three argument volume of a box. If no argument is given to the function, then it will display appropriate message. 

6.Write a program to find the summation of three numbers by using one function only with function name SUM having three arguments. If at run time one argument is given to the function SUM, then second and third argument will be assumed by default as 10 and 20 respectively. If two arguments are given at run time, then third argument will be assumed as 20. Use function with default argument concepts.
*/

#include<iostream>
using namespace std;

int main(){
    int i=1;
    float f=1.0;
    double d=1.0;
    char c='a';
    
    cout << "\n Size of int = "<< sizeof(int);
    cout << "\n Size of i = "<< sizeof(i);

    cout << "\n Size of float = "<< sizeof(float);
    cout << "\n Size of f = "<< sizeof(f);

    cout << "\n Size of double = "<< sizeof(double);
    cout << "\n Size of d = "<< sizeof(d);

    cout << "\n Size of char = "<< sizeof(char);
    cout << "\n Size of c = "<< sizeof(c);


    return 0;
}