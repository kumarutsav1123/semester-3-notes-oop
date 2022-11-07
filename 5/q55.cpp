#include<iostream>
using namespace std;
class student{
    protected:
    int roll, age;
    string name;
    public:
    void getdata(){
        cout<<"Enter roll number: ";
        cin>>roll;
        cout<<"Enter name: ";
        getline(cin>>ws,name);
        cout<<"Enter age: ";
        cin>>age;
    }
};
class test:public student{
    protected:
    int mark[5];
    public:
    void get(){
        getdata();
        for (int i = 0; i < 5; i++)
        {
            cout<<"Enter the marks in sub "<<i+1<<": ";
            cin>>mark[i];
        }
    }
    void display(){
        cout<<"\nName: "<<name<<"\n";
        cout<<"Roll No: "<<roll<<"\n";
        cout<<"Age: "<<age<<"\n";
        for (int i = 0; i < 5; i++)
        {
            cout<<"Marks in sub "<<i+1<<": "<<mark[i]<<"\n";     
        }
    }
};
class result: public test{
    float total, per;
    public:
    void compute(){
        get();
        total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += mark[i];
        }
        per = total/5.0;
    }
    void display(){
        test::display();
        cout<<"Total Marks: "<<total<<"\n";
        cout<<"Percentage: "<<per<<"\n";
    }
};
int main()
{
    test t;
    // t.getdata();
    t.get();
    t.display();
    return 0;
}