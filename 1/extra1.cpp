/*
Input N Number of elements to the array and exchange the Biggest and Smallest number Using a function and call by reference without passing the full array
*/

#include<iostream>
using namespace std;

void swap(int &index_max, int &index_min){
    int temp = index_max;
    index_max = index_min;
    index_min = temp;
}

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    //Biggest and smallest 
    int max=arr[0];
    int index_max=0;
    int min=arr[0];
    int index_min=0;
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
            index_max=i;
        }

        if(arr[i]<min){
            min=arr[i];
            index_min=i;
        }
    }

    //swap
    swap(arr[index_max], arr[index_min]);

    //print array
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    // cout << min<< endl;
    // cout << max;
    return 0;
}