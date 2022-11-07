// 5. Create a class student which stores name, roll no and age of a student. Derive a class test from student class, which stores marks in 5 subjects. Input and display the details of a student.

#include<iostream>
using namespace std;

static int j;
static int i;
static int k;


class Student{
    protected:
    char name[10];
    int roll, age;

    public:
    void get(){
        cout<<j+1<<".Enter name ";
        cin>>name;
        cout<<name;
        cout<<"Enter rollno, age:";
        cin>>roll>>age;
        j++;
    }

};
class Test: public Student{
    protected:
    int m[5];

    public:
    void get(){
        cout<<i+1<<".Enter marks: ";
        cin>>m[0]>>m[1]>>m[2]>>m[3]>>m[4];
        i++;
    }
    void display(){
        cout<<"\nStudent "<<k<<endl;
        cout<<"Name\tRoll No\tAge\tMarks\n";
        cout<<name;
        // cout<<name<<"\t"<<roll<<"\t"<<age<<"\t"<<m[0]<<m[1]<<m[2]<<m[3]<<m[4];
        k++;
    }
};

int main(){
    cout<<"Enter number of students: ";
    int no;
    cin>>no;
    Student s[no];
    Test t[no];
    
    for(int i=0; i<no; i++){
        s[i].get();
        t[i].get(); 
    }
    for(int i=0; i<no; i++){
        t[i].display();
    }
    return 0;
}