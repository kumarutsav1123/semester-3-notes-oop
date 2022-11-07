#include <iostream>
#include <iomanip>
using namespace std;
static int count = 1;
static int gt;
class product
{
    string code, name;
    int price, quantity, total;

public:
    void getdata();
    void calculate();
    void display();
};
void product::getdata()
{
    cout << "Enter the name of product: ";
    getline(cin >> ws, name);
    cout << "Enter the code of product: ";
    getline(cin >> ws, code);
    cout << "Enter the price of product: ";
    cin >> price;
    cout << "Enter the quantity of product: ";
    cin >> quantity;
}
void product ::calculate()
{
    total = price * quantity;
    gt += total;
}
void product::display()
{
    cout << setw(4) << left << count++ << setw(10) << left << code << setw(15) << left 
    << name << setw(10) << left << price << setw(10)<< left << quantity << setw(10) 
    << left << total << "\n";
    for (int i = 0; i < 11; i++)
    {
        cout << "-----";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter number of products: ";
    cin >> n;
    product t[n];
    for (int i = 0; i < n; i++)
    {
        t[i].getdata();
    }
    cout << setw(4) << left << "SI." << setw(10) << left << "Code" << setw(15) << left 
    << "Name" << setw(10) << left << "Price"<< setw(10) << left << "Quantity" 
    << setw(10) << left << "Total"<< "\n";
    for (int i = 0; i < 11; i++)
    {
        cout << "-----";
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        t[i].calculate();
        t[i].display();
    }
    cout<<setw(50)<<right<<"Total = Rs."<<gt<<"/-\n";
    return 0;
}