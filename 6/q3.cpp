#include<iostream>
using namespace std;

class Circle{
	protected:
	float radius;
	
	public:
	Circle(){
		cout<<"\nEnter radius of circle: ";
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
		cout<<"\nEnter breadth of Rectangle: ";
		cin>>b;
		float area_rect = l*b;
		cout<<"\nRectangle area = "<<area_rect; 
	}
};

class Cylinder: public Circle{
	float r, h;
	public:
	Cylinder(){
		cout<<"\nEnter radius and height of Cylinder: ";
		cin>>r>>h;
		float area_cyl = 3.14*r*r*h;
		cout<<"\nCylinder area = "<<area_cyl; 
	}
};

int main(){
	cout<<"\nFrom rectangle object:\n";
	Rectangle o1;
	cout<<"\n\nFrom Cylinder object:\n";
	Cylinder o2;
	
	return 0;
}
