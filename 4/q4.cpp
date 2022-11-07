// 4. Create a class 'Complex' to hold a complex number. Write a friend function to add two complex numbers. Write a main function to add two Complex objects.

#include<iostream>
using namespace std;

class Complex{
	int a,b;

	public:
	void get(){
		cout<< "Enter real part: ";
		cin>> a;	
		cout<< "Enter imaginary part: ";
		cin>> b;	
	}
	friend void friendly_add(Complex, Complex);
};

void friendly_add(Complex o11, Complex o22){
	int real = o11.a + o22.a;
	int imaginary = o11.b + o22.b;
	cout<<"Sum = "<< real<<" + "<<imaginary<<"i";
}
int main(){
	Complex o1,o2;
	cout << "First complex no: \n";
	o1.get();
	cout << "Second complex no: \n";
	o2.get();
	
	friendly_add(o1,o2);
	

	return 0;
}
