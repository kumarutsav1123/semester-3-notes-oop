#include<iostream>
using namespace std;

class B;
class A{
    int i =10;

    public:
    friend class B;
};

class B{
    int b=5;

    public:
    A sum_dis(A a11){
        cout<<" "<<this;
        // cout<< a11.i+this->b;
        return a11;
    }
};

int main(){
    A a1, a2;
    B b1;
    a2 = b1.sum_dis(a1);

    A *ptr = &a1;
    cout <<" "<< ptr;
    
    // printf("Hehe!");

    return 0;
}