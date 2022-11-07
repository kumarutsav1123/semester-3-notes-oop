// 3. Create a class which stores a string and its length as data members. Include all the constructors. Include a member function to join two strings and display the concatenated string.

#include<iostream>
#include<string.h>
using namespace std;

class Class1{
	string str;
	int length;

	public:
	Class1(){
		// static int i=1;
		cout<<" Enter the string: ";
		cin>>str;
	}

	void joinFun(Class1 o11, Class1 o22){
		string joinedStr = o11.str + " " + o22.str;
		cout << joinedStr;
	}
	~Class1(){
		cout<<"\nDestructor invoked";
	}
};
int main(){
	Class1 o1,o2;
	o1.joinFun(o1,o2);

	return 0;
}
