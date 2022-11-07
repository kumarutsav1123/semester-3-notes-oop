/*
Q1. WAP in C++ to find the roots of quadratic equation
Q2. WAP to find biggest element from an Array
Q3. Define a structure student with proper data members. Input and display the details of a student.
Display it in tabular format

Extra Question
Modify Q2 and swap the biggest and smallest element of the array.
Modify Q3 and display the details of n no of students
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a=6,b=-17,c=12;
    float det = b*b - 4*a*c;

    if (det > 0) {
        float root1,root2;
        root1 = (-b + sqrt(det)) / (2*a);
        root2 = (-b - sqrt(det)) / (2*a);
        cout << "Roots are : " << root1 << " and " << root2;
    }
    else if(det==0) {
        float root1,root2;
        root1 = root2 = -b / (2*a);
        cout << "Roots are : " << root1 << " and " << root2;
    }
    else {
        cout << "Roots are imaginary";
    }
    return 0;
}