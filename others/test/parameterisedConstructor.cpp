#include<iostream>
using namespace std;

class Hehe{
    int i=1;

    public:
    Hehe(char c){
        cout<<c;
        cout<<endl<<i;
    }
};

int main(){
    Hehe o1('c');
    
    return 0;
}