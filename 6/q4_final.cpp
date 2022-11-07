#include<iostream>
#include <sstream>  
using namespace std;

class Student{
	protected:
	string name;
	int roll;

	public:
	Student(){
		cout<<"Enter name: ";
		cin>>name;
		cout<<"Enter roll no: ";
		cin>>roll;
		cout<<"Name = "<<name<<"\nROll no ="<<roll<<endl; 
	}
	virtual void display(){
		cout<<"Name = "<<name<<"\nROll no ="<<roll<<endl; 
	}

};

class Sports:virtual public Student{
	protected:
	int s_grade;
	
	public:
	Sports(){
		cout<<"Enter sports grade: ";
		cin>>s_grade;
	}
};

class Exam:virtual public Student{
	protected:
	int e_grade;

	public:
	Exam(){
		cout<<"Enter exam grade: ";
		cin>>e_grade;
	}
};

class Results:public Sports, public Exam{
	protected:
	string strSports = to_string(s_grade);
	string strExam = to_string(e_grade);
	string strRoll = to_string(roll);
	
	string result = "Name: " + name + ", Roll no: " +strRoll+ ", Sports Grade: "+strSports+", Exam Grade: "+strExam;
	
	
	public:
	void display(){
		cout<<result;
	}

};

int main(){
	
	Results res;
	res.display();
	
	return 0;
}
