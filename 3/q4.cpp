//4. Create a DISTANCE class with the following members:
// Data members
//1. feet and inches
//Member functions
//1. To input distance 2. To output distance 3. To add two distance objects
//Write a main function to create objects of Distance class. Input two distance and output the sum.

#include<iostream>
using namespace std;

class Distance{
	int feet, inch;

	public:
	void get(){
		cout<< "Enter distance in feet inches: ";
		cin >> feet >> inch;
	}
	void add(Distance o11, Distance o22){
		inch = o11.inch + o22.inch;
		feet = o11.feet + o22.feet;


		while(inch>12){
			feet++;
			inch = inch - 12 ;
		}
	}
	void display(){
		cout <<"Sum = "<< feet <<"' "<< inch <<"''";
	}
};

int main(){
	Distance o1,o2,o3;
	o1.get();
	o2.get();
	o3.add(o1,o2);
	o3.display();
	return 0;
}