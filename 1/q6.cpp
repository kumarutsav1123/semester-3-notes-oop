/*
6.Write a program to find the summation of three numbers by using one function only with function name SUM having three arguments. If at run time one argument is given to the function SUM, then second and third argument will be assumed by default as 10 and 20 respectively. If two arguments are given at run time, then third argument will be assumed as 20. Use function with default argument concepts.
*/

#include<iostream>
using namespace std;

void sum(int a, int b=10, int c=20){
    int sum = a+b+c;
    cout << "Sum = " << sum;
}
int main(){
    int a,b,c;
    int n;
    cout << "How many arguments you want to pass : ";
    cin >> n;

    if(n==1){
        cin >> a;
        sum(a);
    }
    else if(n==2){
        cin >> a >>b;
        sum(a,b);
    }
    else if(n==3){
        cin >> a >>b >>c;
        sum(a,b,c);
    }
    return 0;
}

