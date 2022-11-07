// 3. WAP to find out the greatest between two numbers defined in two different classes by using friend function.


#include<iostream>
using namespace std;

class Class2;
class Class1{
	int l;

	public:
	void get(){
		cout<<"Enter first number: ";
		cin>> l;
	}
	
	friend void friendly_max(Class1, Class2);
	
};
class Class2{
	int a;

	public:
	void get(){
		cout<<"Enter second number: ";
		cin>> a;
	}
	friend void friendly_max(Class1, Class2);
	
};

void friendly_max(Class1 o11, Class2 o22){
	if(o11.l>o22.a){
		cout<< "Max = " << o11.l;
	}
	else if(o11.l<o22.a){
		cout<< "Max = " << o22.a;
	}
	else {
		cout<<"Equal";
	}	
}

int main(){
	Class1 o1;
	Class2 o2;
	o1.get();
	o2.get();
	friendly_max(o1, o2);
	
	return 0;
}
