// 1. WAP a program that adds two complex numbers. The objects must be passed as function arguments.

#include<iostream>
using namespace std;

class complex{
	int a1,b1;

	public:
	void get(){
		cout << "Enter real part of the complex number: ";
		cin >> a1;
		cout << "Enter imaginary part of the complex number: ";
		cin >> b1;
	
	}
	
	void sum(complex o11, complex o22){
		cout<< "Sum : ";
		cout<< o11.a1+o22.a1 << " + "<< o11.b1+o22.b1<< "i\n";	
	}
};

int main(){

	complex o1,o2;
	o1.get();
	o2.get();
	o1.sum(o1,o2);
		
	return 0;
}
