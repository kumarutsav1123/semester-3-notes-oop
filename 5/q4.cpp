// 1. WAP to demonstrate all types of inheritance.

#include<iostream>
using namespace std;

class Single;
class A;
class B;
class C;
class D;
class Multilevel;

// 1. Single
class Single{
	protected:
	int singleInt = 0;
	public:
	void display(){
		cout<<singleInt<<endl;
	}
};
class A{
	protected:
	int baseInt = 1;
};
//2. Hierarchical, Multipath inheritance
class B: virtual public A{
	protected:
	int childInt1 = 10;

	public:
	void display(){
		cout<<baseInt<<endl;
	}
};
class C: virtual public A{
	protected:
	int childInt2 = 10;

	public:
	void display(){
		cout<<baseInt<<endl;
	}
};
// 3. Multiple Inheritance
class D: public Single, public A{
	protected:
	int intD = 40;
	public:
	void displayD(){
		cout<<singleInt<<" "<<baseInt<<endl ;
	}
};
class MultiLevel: public B{
	public:
	void display(){
		cout<< baseInt<<" "<<childInt1<<endl;
	}
};
class Multipath: public B, public C{
	public:
	void display(){
		cout<<childInt1<<" "<<childInt2<<endl;
	}
};

int main(){
	Single s1;
	cout<<"From\nSingle inheritance: ";
	s1.display();
	cout<<"Multilevel: ";
	MultiLevel o2;
	o2.display();
	cout<<"Multipath: ";
	Multipath o3;
	o3.display();
	cout<<"Hierarchical: ";
	B b1; C c1;
	b1.display(); c1.display();
	cout<<"Multiple: ";
	D d1;
	d1.display();
	return 0;
}
