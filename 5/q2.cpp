// 2. Create a class which stores time in hh:mm format. Include all the constructors. The parameterized constructor should initialize the minute value to zero, if it is not provided.

#include<iostream>
using namespace std;

class Time{
	int hr,min;
	
	public:
	Time(int hr, int min=0){
		cout<<"\nEntered time: "<<hr<<":"<<min;
	}
	~Time(){
	cout<<"Destructor invoked";
	}
};

int main(){
	Time o1(10, 20);
	Time o2(5);

	return 0;
}
