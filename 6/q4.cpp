#include<iostream>
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
	public:
	void display(){
		cout<<"\nSports grade = "<<s_grade<<"\nExam grade = "<<e_grade; 
	}

};

int main(){
	
	Results res;
	res.display();
	
	return 0;
}
