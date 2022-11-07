#include <iostream>
#include <cmath>
using namespace std;

class Matrix{
    private:
    //DM
    int arr[5][5];
    //MF
    public:
    void createMagicMatrix(int n=5){
        // int arr[n][n];
        int number =1;
        int row =n-1;
        int col=n/2;
        arr[row][col]=number;

        while(number<=(n*n)){
            arr[row][col]=number;
            row++;
            col--;
            if(number%n==0){
                row=row-2;
                col++;
            }
            if(row>=n){
                row==0;
            }
            if(col==0){
                col==n-1;
            }
            number++;
        }
    }  
};


int main(){

    cout << "Enter odd n: ";
    int n;
    cin>>n;
    int arr[n][n];
    Matrix m;

    m.createMagicMatrix(n);
    for(int i=0; i<n; i++){
            for(int j=0; i<n; j++){
                cout<< arr[i][j] <<" ";
            }
            cout << "\n";
        }
    
    return 0;
}