#include <iostream>
#include <iomanip>
using namespace std;
class student
{
    int roll;
    string name;
    int marks[6];
    int total;

public:
    void getdata();
    void calculate();
    void display();
};
void student ::getdata()
{
    cout << "Enter the name of student: ";
    getline(cin >> ws, name);
    cout << "Enter the roll no. of student: ";
    cin >> roll;
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter the marks in subject " << i + 1 << ": ";
        cin >> marks[i];
    }
}
void student ::calculate()
{
    total = 0;
    for (int i = 0; i < 6; i++)
    {
        total += marks[i];
    }
}
void student ::display()
{
    cout << setw(18) << left << "NAME" << setw(15) << left << name << "\n";
    cout << setw(18) << left << "ROLL NO" << setw(15) << left << roll << "\n";
    cout << setw(18) << left << "TOTAL" << setw(15) << left << total << "\n";
    if (total/6 > 89)
    {
        cout << setw(18) << left << "GRADE" << setw(15) << left << "O"
             << "\n";
    }
    else if (total/6 > 79 && total/6 < 89)
    {
        cout << setw(18) << left << "GRADE" << setw(15) << left << "E"
             << "\n";
    }
    else if (total/6 > 69 && total/6 < 79)
    {
        cout << setw(18) << left << "GRADE" << setw(15) << left << "A"
             << "\n";
    }
    else if (total/6 > 59 && total/6 < 69)
    {
        cout << setw(18) << left << "GRADE" << setw(15) << left << "B"
             << "\n";
    }
    else if (total/6 > 49 && total/6 < 59)
    {
        cout << setw(18) << left << "GRADE" << setw(15) << left << "C"
             << "\n";
    }
    else
    {
        cout << setw(8) << left << "GRADE" << setw(15) << left << "FAIL"
             << "\n";
    }
    cout << "----------------------\n";
    cout << "|" << setw(12) << left << "Subjects"
         << "|" << setw(7) << right << "Marks"
         << "|\n";
    cout << "----------------------\n";
    for (int i = 0; i < 6; i++)
    {
        cout << "|" << setw(11) << left << "Subject " <<left<< i + 1 << "|" << setw(7) << right<< marks[i] << "|\n";
        cout << "----------------------\n";
    }

}
int main()
{
    student a;
    cout<<"Enter details of student ---->\n";
    a.getdata();
    a.calculate();
    a.display();
    return 0;
}