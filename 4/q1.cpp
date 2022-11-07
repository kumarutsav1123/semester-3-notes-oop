// 1. WAP to find out the area of an rectangle through friend function and member function separately of Rectangle class

#include<iostream>
using namespace std;

class Rect{
	int l, b;

	public:
	void get(){
		cout<<"Enter length breadth: ";
		cin>> l >> b;
	}
	void member_area(){
		cout << "\nArea from member function = "<< l*b;	
	}
	friend void friendly_area(Rect);
	
};

void friendly_area(Rect o11){
	cout << "\nArea from friend function = "<< o11.l*o11.b;
}

int main(){
	Rect o1;
	o1.get();
	o1.member_area();
	friendly_area(o1);
	
	return 0;
}
