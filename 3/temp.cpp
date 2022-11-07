#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void getdata();
    void display();
    complex add(complex, complex);
    complex add(int a, complex);
};
void complex::getdata(){
    cout<<"Enter the real part: ";
    cin>>a;
    cout<<"Enter the imaginary part: ";
    cin>>b;
}
complex complex:: add(complex x, complex y){
    complex t;
    t.a = x.a + y.a;
    t.b = x.b + y.b;
    return t;
}
complex complex:: add(int t, complex y){
    complex x;
    x.a = t + y.a;
    // x.b = x.b + y.b;
    return x;
}
void complex::display(){
    cout<<a<<" + "<<b<<"i \n";
}
int main()
{
    complex m, n, r;
    cout<<"Enter details of first complex Number --->\n";
    m.getdata();
    cout<<"Enter details of second complex Number --->\n";
    n.getdata();
    r = m.add(m,n);
    cout<<"1st Complex number -->\n";
    m.display();
    cout<<"2nd Complex number -->\n";
    n.display();
    cout<<"Addition of 2 Complex number -->\n";
    r.display();
    cout<<"Addition of a & Complex number -->\n";
    r = m.add(12,n);
    r.display();
    return 0;
}