#include<iostream>
using namespace std;

class student{
    char name;
    int roll;

    public:
    void get(char a, int b){
        cin>>a>>b;
    }
    void out(char a, int b){
        cout>>a>>" "> b;
    }
}
int main(){
    student s1,s2;
    s1.get(10,20);
    s2.get(5,10);

    s1.out();
    return 0;
}