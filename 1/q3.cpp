/*
3.Write a program to demonstrate the concept of call-by-value, call-by-reference & call-by address by taking swapping of two numbers as an example.
*/

#include<iostream>
using namespace std;

void swap1(int a, int b){
    int temp = a;
    a= b;
    b = temp;
}
void swap2(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void swap3(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    cout<<"Enter the 1st number: ";
    cin>>a;
    cout<<"Enter the 2nd number: ";
    cin>>b;

    cout<<"Before Swapping --->"<<endl<<a<<"\t"<<b<<endl;
    swap1(a,b);
    cout<<"After Swapping using value --->"<<endl<<a<<"\t"<<b<<endl;
    swap2(a,b);

    cout<<"After Swapping using reference --->"<<endl<<a<<"\t"<<b<<endl;
    swap3(&a,&b);

    cout<<"After Swapping using address --->"<<endl<<a<<"\t"<<b<<endl;
    return 0;
}