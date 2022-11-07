#include<iostream>
using namespace std;

void in(int arr[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
}

void prt(int a[3][3]){
    cout << "\n\n";
    // a[1][1] = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<< a[i][j] << " ";
        }
        cout << "\n";
    }
}

int main(){
    int arr[3][3];
    in(arr);

    prt(arr);

    
    return 0;
}