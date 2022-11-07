#include<iostream>
#include<iomanip>
using namespace std;
class MAtrix
{
private:
    int a;
    int **mat;
public:
    void createMat(int r);
    void displayMat( );
};
void MAtrix ::createMat(int r = 5){
    // cout<<"ENter size of matrix: ";
    // cin>>a;
    a = r;
    mat = new int*[a];
    for (int i = 0; i < a; i++)
    {
        mat[i] = new int[i];
    }
    int i = a-1, j = (a)/2;
    for (int t = 1; t <= a*a; t++)
    {
        mat[i][j] = t;
        i++;
        j--;
        if (t%a == 0)
        {
            i = i-2;
            j++;
        }
        if (j == -1)
        {
            j = a-1;
        }
        if (i == a)
        {
            i = 0;
        }
    }
}
void MAtrix ::displayMat( ){
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout<<setw(6)<<left<<mat[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    MAtrix x;
    x.createMat(5);
    x.displayMat();
    return 0;
}