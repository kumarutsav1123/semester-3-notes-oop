/*
Q3. Define a structure student with proper data members. Input and display the details of a student.
*/

#include <iostream>
#include <cmath>
using namespace std;

struct student {
    int roll;
    char name[20];
    float marks;
} s[2];

int main() {

    for (int i=0; i<2; ++i) {
        s[i].roll = i + 1;
        cout << "\nEnter name for roll no. " << s[i].roll << "\n";
        cin >> s[i].name;
        cout << "Enter marks: ";
        cin >> s[i].marks;
    }

    for (int i=0; i<2; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].name);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}
