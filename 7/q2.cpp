// 2. Modify the q1 by creating an array of n objects using pointers. Show the details of n items by using pointers to object concept.

#include<iostream>
using namespace std;

class Item{
    int no, price;

    public:
    Item(){
        cout<<"Enter item number, price: ";
        cin>>no>>price;
    }
    void display(){
        cout<<no<<"\t"<<price<<endl;
    }
};

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    Item o[n], *arrPtr[n];

    for(int i=0; i<n; i++){
        arrPtr[i] = &o[i];
    }
    
    cout<<"\nEntered details:\n";
    for(int i=0; i<n; i++){
        arrPtr[i]->display();
    }
    
    return 0;
}