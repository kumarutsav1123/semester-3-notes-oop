/*
Function types
1. Call by value
2. Call by reference 
3. Call by address
*/

#include<iostream>
using namespace std;

void byvalue(int a, int b){
    int temp= a;
    a=b;
    b=temp;
}

void byreference(int &a, int &b){
    int temp= a;
    a=b;
    b=temp; 
}
void byaddress(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=10,y=20;

    cout << "x = " << x << "\n";
    cout << " y = " << y << "\n";
    byvalue(x,y);
    cout << "x = " << x << "\n";
    cout << " y = " << y << "\n";

    cout << "\n\n";

    cout << "x = " << x << "\n";
    cout << " y = " << y << "\n";
    byreference(x,y);
    cout << "x = " << x << "\n";
    cout << " y = " << y << "\n";

    cout << "\n\n";

    cout << "x = " << x << "\n";
    cout << " y = " << y << "\n";
    byaddress(&x,&y);
    cout << "x = " << x << "\n";
    cout << " y = " << y << "\n";
    return 0;
}
