// 1.(Pointers to obj) Define a class Item that is used to store and display the information regarding the item number and its price. Write a program to store and display the details of one item by using both normal object and pointer to object separately. Display appropriate message whenever necessary/

#include<iostream>
using namespace std;

class Item{
    int no, price;

    public:
    Item(){
        cout<<"\nEnter item number, price: ";
        cin>>no>>price;
    }
    void display(){
        cout<<no<<"\t"<<price<<endl;
    }
};

int main(){
    cout<<"\nUsing normal object";
    Item o1, *ptr;
    o1.display();
    cout<<"\nUsing pointer to object";
    Item o2;
    ptr = &o2;
    ptr->display();
    return 0;
}