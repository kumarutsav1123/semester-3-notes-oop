/*
Q2. WAP to find biggest element from an Array

*/

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,6,4,8};

    int arr_length= sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];

    for (int i=0; i<arr_length; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout << "Max = " << max;

    return 0;
}