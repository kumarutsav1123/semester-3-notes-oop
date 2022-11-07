#include <iostream>
using namespace std;
class A
{
    public:
    int integer;
    void input(){
        cin>>integer;
    }
    void output(){
        cout<<integer;
    }
    
};
int main()
{
    A i,j;
    int c1=0,c2=0 ;

    cout<<"\t **"<<endl;
    cout<<"enter 1 to take input "<<endl;
    cout<<"enter 2 to display "<<endl;
    
    cout<<"enter 3 to exit "<<endl;
    while (j.integer != 3)
    {
        switch (j.integer)
        {
        case 1:
            i.input();
            c1++;
            break;
        case 2:
            i.output();
            c2++;
            break;
        case 3:
            break;
        }
    }
    
    cout<<"input fucntion was called "<<c1<<" times"<<endl;
    cout<<"display fucntion was called "<<c2<<" times"<<endl;
    return 0;
    

}