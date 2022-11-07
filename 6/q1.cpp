#include<iostream>
using namespace std;

class Circle{
	protected:
	float radius;
	
	public:
	Circle(){
		cout<<"Enter radius: ";
		cin>>radius;
		float area = 3.14*radius*radius;
		cout<<"Circle area = "<<area;
	}
};

class Rectangle: public Circle{
	float l, b;
	public:
	Rectangle(){
		l = radius;
		cout<<"\nEnter breadth: ";
		cin>>b;
		float area_rect = l*b;
		cout<<"\nRectangle area = "<<area_rect; 
	}
};

int main(){
	Rectangle o1;
	
	return 0;
}
