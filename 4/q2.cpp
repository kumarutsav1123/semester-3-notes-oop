// 2. WAP to find out the area of one rectangle and one square by using suitable friend function named as area() for it.

#include<iostream>
using namespace std;

class Square;
class Rect{
	int l, b;

	public:
	void get(){
		cout<<"Enter length breadth: ";
		cin>> l >> b;
	}
	void member_area(){\
		cout << "\nRectangle Area from member function = "<< l*b;	
	}
	friend void friendly_area(Rect, Square);
	
};
class Square{
	int a;

	public:
	void get(){
		cout<<"Enter side: ";
		cin>> a;
	}
	void member_area(){\
		cout << "\nSquare Area from member function = "<< a*a;	
	}
	friend void friendly_area(Rect, Square);
	
};

void friendly_area(Rect o11, Square o22){
	cout << "\nRectangle Area from friend function = "<< o11.l*o11.b;
	cout << "\nSquare Area from friend function = "<< o22.a*o22.a;	
}

int main(){
	Rect o1;
	Square o2;
	o1.get();
	o2.get();
	o1.member_area();
	o2.member_area();
	friendly_area(o1, o2);
	
	return 0;
}
