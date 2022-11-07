/*
2.Write a program in to check whether a number is prime or not.
*/

#include<iostream>
using namespace std;

int main(){
    cout<< "Enter the number : ";
    int n, flag=1;
    cin >> n;

    if (n==1){
        cout << "1 is neither prime nor composite\n";
        return 0;
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            flag=0;
            cout << "Not Prime";
            break;
        }
    }
    if(flag==1){
        cout << "Prime";
    }
    return 0;
}