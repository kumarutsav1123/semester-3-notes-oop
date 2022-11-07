// 1. Create a class complex which stores real and imaginary part of a complex number. Include all types of constructors and destructor. The destructor should display a message about the destructor being invoked. Create objects using different constructors and display them.

#include<iostream>
using namespace std;

class Complex{
	int r, i;

	public:
	Complex(){
		cout<<"Constructor invoked:\n"; 
		cout<<"Enter real part: ";
		cin>>r;
		cout<<"Enter imaginary part: ";
		cin>>i;
	}
	void display(){
		cout<<"Entered complex no:\n";
		cout<<r<<" + "<<i<<"i";
		
	}
	~Complex(){
		cout<<"\nDestructor invoked:";
	}

};
int main(){
	Complex o1;
	o1.display();
	
}
