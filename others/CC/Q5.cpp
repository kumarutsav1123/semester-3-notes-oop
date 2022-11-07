#include <iostream>
#include <iomanip>
using namespace std;
class student
{
    int roll;
    string name;
    int marks[3];
    float total;
    static int avg;

public:
    void getdata();
    void calculate();
    int average(int);
    int mark();
    void display();
    void display_name();
    void display_roll();
    void highlow(int n);
};
int highest = 0, lowest = 300, x, y;
int student::avg = 0;
void student ::getdata()
{
    cout << "Enter the name of student: ";
    getline(cin >> ws, name);
    cout << "Enter the roll no. of student: ";
    cin >> roll;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the marks in subject " << i + 1 << ": ";
        cin >> marks[i];
    }
}
void student ::calculate()
{
    total = 0;
    for (int i = 0; i < 3; i++)
    {
        total += marks[i];
    }
    avg += total;
    total = total / 3;
}

int student ::average(int n)
{
    int low = 0, high = 0;
    float t = (float)avg;
    t = (float)(t / (n * 3));
    // cout<<avg<<"\n";
    if ((float)total > avg)
    {
        high++;
    }
    return high;
}
int student ::mark()
{
    return total;
}
void student::display()
{
    cout << setw(8) << "Name" << setw(10) << name << endl;
    cout << setw(8) << "ROll" << setw(10) << roll << endl;
    cout << setw(8) << "Total" << setw(10) << total << endl;
}
void student::display_name()
{
    cout << name;
}
void student::display_roll()
{
    cout << roll;
}
void student::highlow(int n)
{
    if (highest < total)
    {
        highest = total;
        x = n;
    }
    if (lowest > total)
    {
        lowest = total;
        y = n;
    }
}
int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    student a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of student ---->\n";
        a[i].getdata();
    }
    int high = 0, low = 0;
    for (int i = 0; i < n; i++)
    {
        a[i].calculate();
        high += a[i].average(n);
    }
    low = n - high;
    
    cout << "No of students above avg marks: " << high << endl;
    cout << "No of students below avg marks: " << low << endl;
    
    return 0;
}