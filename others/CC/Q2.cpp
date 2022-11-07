#include <iostream>
using namespace std;
class poly
{
    int t;
    int *a;

public:
    void create();
    poly add(poly, poly);
    void display();
    poly multi(poly, poly);
};
void poly::create()
{
    cout << "Enter the degree of the Polynomial: ";
    cin >> t;
    a = new int[t + 1];
    for (int i = t; i >= 0; i--)
    {
        cout << "Enter the coefficient of the x^" << i << ": ";
        cin >> a[i];
    }
}
poly poly ::add(poly x, poly y)
{
    poly n;
    int max = (x.t > y.t) ? x.t : y.t;
    n.a = new int[max + 1];
    n.t = max;
    // int i = 0, j = 0, k = 0;
    for (int i = 0; i < max + 1; i++)
    {
        n.a[i] = 0;
    }
    for (int i = 0; i < x.t + 1; i++)
    {
        n.a[i] = x.a[i];
    }
    for (int i = 0; i < y.t + 1; i++)
    {
        n.a[i] += y.a[i];
    }
    return n;
}
poly poly ::multi(poly x, poly y)
{
    poly n;
    // int max = (x.t > y.t)?x.t:y.t;
    n.a = new int[x.t + y.t + 1];
    n.t = x.t + y.t;
    // int i = 0, j = 0, k = 0;
    for (int i = 0; i < x.t + y.t + 1; i++)
    {
        n.a[i] = 0;
    }
    for (int i = 0; i < x.t + 1; i++)
    {
        for (int j = 0; j < y.t + 1; j++)
        {
            n.a[i + j] += x.a[i] * y.a[j];
        }
    }
    return n;
}
void poly::display()
{
    for (int i = t; i >= 0; i--)
    {
        cout << " " << a[i] << "x^" << i << " ";
        if (a[i - 1] > 0 && i != 0)
        {
            cout << "+";
        }
    }
    cout << endl;
}
int main()
{
    poly a, b, sum, mul;
    cout << "Enter 1st Polynomial --->\n";
    a.create();
    cout << "Enter 2nd Polynomial --->\n";
    b.create();
    cout << "1st Polynomial --->\n";
    a.display();
    cout << "2nd Polynomial --->\n";
    b.display();
    cout << "Addition of 1st & 2nd Polynomial ---->\n";
    sum = a.add(a, b);
    sum.display();
    cout << "Product of 1st & 2nd Polynomial ---->\n";
    mul = a.multi(a, b);
    mul.display();
    return 0;
}