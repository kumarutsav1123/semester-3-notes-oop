/*
Input elements and delete the duplicate of  an array
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int k=0; k<n; k++){
        if(arr[k]==arr[k+1]){
            int x=arr[k];
            int i;
            for(i=0; i<n; i++){
                if(arr[i]==x){
                break;
                }   
            }
            if(i<n){
                n = n - 1;
                for (int j=i; j<n; j++)
                    arr[j] = arr[j+1];
            }
        }
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}