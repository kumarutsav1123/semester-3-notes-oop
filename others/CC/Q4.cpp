#include <iostream>
using namespace std;
class date
{
    struct birth
    {
        int d1, d2;
        int mon1, mon2;
        int yr1, yr2;
    } b1;

public:
    void getdata();
    void compute();
    void display();
};
void date::getdata()
{
    cout << "Enter the date (DD:MM:YY): ";
    cin >> b1.d1 >> b1.mon1 >> b1.yr1;
    cout << "Enter your birth date (DD:MM:YY): ";
    cin >> b1.d2 >> b1.mon2 >> b1.yr2;
}
void date::compute()
{
    int h1 = 0;
    if (b1.mon1 == 1 || b1.mon1 == 3 || b1.mon1 == 5 || b1.mon1 == 7 || b1.mon1 == 8 || b1.mon1 == 10 || b1.mon1 == 12)
    {
        if (b1.d1 < b1.d2)
        {
            b1.d1 = b1.d1 - b1.d2 + 31;
            // h1 = b1.d1/31;
            // b1.d1 = b1.d1%31;
            b1.mon1--;
        }
        else
        {
            b1.d1 = b1.d1 - b1.d2;
            // h1 = b1.d1/31;
            // b1.d1 = b1.d1%31;
        }
    }
    else
    {
        if (b1.d1 < b1.d2)
        {
            b1.d1 = b1.d1 - b1.d2 + 30;
            // h1 = b1.d1/30;
            // b1.d1 = b1.d1%30;
            b1.mon1--;
        }
        else
        {
            b1.d1 = b1.d1 - b1.d2;
            // h1 = b1.d1/30;
            // b1.d1 = b1.d1%30;
        }
    }
    if (b1.yr2%4 == 0 && b1.yr2%100 == 0)
    {
        b1.d1 += 1;
    }
    
    cout<<b1.d1<<"\n";
    if (b1.mon1 < b1.mon2)
    {
        b1.mon1 = b1.mon1 - b1.mon2 + 12 ;
    }
    else
    {
        b1.mon1 = b1.mon1 - b1.mon2 ;
    }
    b1.yr1 = b1.yr1 - b1.yr2;
}
void date::display()
{
    cout<<"Age: Year - "<<b1.yr1<<" Month - "<<b1.mon1<<" Day - "<<b1.d1<<"\n";
}
int main()
{
    date t;
    t.getdata();
    t.compute();
    t.display();
    return 0;
}