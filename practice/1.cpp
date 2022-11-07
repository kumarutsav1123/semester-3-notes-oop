//Reference variable

# include<iostream>
using namespace std;

int main(){
    int a=10;
    int &r = a;

    cout << "a="<< a<<"\n";
    cout << "r="<< r<<"\n";

    a++;
    // cout << a;
    cout << "a="<< a<<"\n";
    cout << "r="<< r<<"\n";


    return 0;
}