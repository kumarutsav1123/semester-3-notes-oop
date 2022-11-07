//Ask in next oop lab why this is not working in vs code but is working in onlinegdb
#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter n to find it's factorial : ";
    cin >> a;
    int factorial =1;
    for (int i=1; i<=a; i++){
        factorial=factorial*i;
    }
    cout << "Factorial = " << factorial;
    return 0;
}