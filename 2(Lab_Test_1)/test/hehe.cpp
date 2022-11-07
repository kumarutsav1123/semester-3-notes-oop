#include <stdio.h>
#include <iostream>

using namespace std;

class Matrix 
{
    
    public:



    void createMagicMatrix(int n=5){
    int num,i,j;
    int arr[n][n];
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            arr[i][j] =0;
        }
    }

    int i = n / 2;
    int j = n - 1;
    for (int num = 1; num <= n * n;) {
        if (i == -1 && j == n)
        {
            j = n - 2;
            i = 0;
        }
        else {
            if (j == n)
                j = 0;
            if (i < 0)
                i = n - 1;
        }
        if (arr[i][j])
        {
            j -= 2;
            i++;
            continue;
        }
        else
            arr[i][j] = num++;
 
        j++;
        i--;
    }
 
}

void displayMatrix(){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
};


};

int main()
{
    Matrix m;
  m.createMagicMatrix();
  m.displayMatrix();

    
return 0;


    }