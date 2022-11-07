// 2. Create a class Time with members hour, minute and second. Write a program that adds two time objects. The objects must be passed as function arguments.

#include<iostream>
using namespace std;

class Time{
	int hour, min, sec;

	public:
	void get(){
	cout<<"Enter hour min sec: ";
	cin>> hour;
	cin>> min;
	cin>> sec;	
	}
	
	void add(Time o11, Time o22){
	int hr, m, s;
	hr = o11.hour + o22.hour;
	m = o11.min + o22.min;
	s = o11.sec + o22.sec;
	while(s>60){
		s=s-60;
		m++;
		}
	while(m>60){
		m=m-60;
		hr++;
		}
	
	cout<< "Time sum : ";
	cout<< hr<< ":"<< m << ":"<< s<<"\n";
	}	
};

int main(){
	
	Time o1,o2;
	o1.get();
	o2.get();
	o1.add(o1,o2);
	return 0;
}
