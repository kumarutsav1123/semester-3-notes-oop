// 5. WAp to create a class called Complex adn implement the following overloading functions Add that return a Complex number.
//a. Add(a,s2) - where a is an integer (real part) and s2 is complex no.
//b. Add(s1,s2) - where s1 and s2 are complex no.

#include<iostream>
using namespace std;

class Complex{
	int r, i;
	public:
	void get(){
		cout<<"Enter real part: ";
		cin>> r;
		cout<<"Enter imaginary part: ";
		cin>> i;
	}
	Complex Add(Complex s11, Complex s22, Complex s33){
		s33.r = s11.r+s22.r;
		s33.i = s11.i+s22.i;
		return s33;
	} 
	Complex Add(Complex s11, int a){
		Complex s33;
		s33.r = s11.r+a;
		return s33;
	}
	void display(){
		cout<<r<<" + "<<i<<"i"<<"\n";
	} 
};
int main(){
	Complex s1,s2,s3;
	int a;
	cout<<"Enter value of a (real part): ";
	cin>>a;
	cout<<"For 1st:\n";
	s1.get();
	cout<<"For 2nd:\n";
	s2.get();

	cout<<"\nAddition of complex numbers\n";
	s3 = s1.Add(s1,s2,s3);
	s3.display();
	cout<<"\nAddition of a(real part) and complex numbers\n";
	s3 = s1.Add(s1,a);
	s3.display();
	s3 = s2.Add(s2,a);
	s3.display();
	return 0;
}