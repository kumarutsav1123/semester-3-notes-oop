// 3. Define a class named as FRACTION that contains two data members that represent the numerator and denominator of a fraction. 


#include<iostream>
#include<algorithm>
using namespace std;

class Fraction{
    int num, denom;

    public:
    void get(){
        cout << "Enter numerator: ";
        cin >> num;
        cout << "Enter denominator: ";
        cin >> denom;
    }
    void add(Fraction o11, Fraction o22){
        int res_num = (o11.num*o22.denom)+(o22.num*o11.denom);
        int res_denom = o11.denom*o22.denom;
        int Gcd = __gcd(res_num, res_denom);
        cout << "\nSum = " << (res_num) << "/" << (res_denom);

        cout << "\n = " << (res_num/Gcd) << "/" << (res_denom/Gcd);
    }
    void subtract(Fraction &o11, Fraction &o22){
        int res_num = (o11.num*o22.denom)-(o22.num*o11.denom);
        int res_denom = o11.denom*o22.denom;
        int Gcd = __gcd(res_num, res_denom);
        cout << "\nSubtraction = " << (res_num) << "/" << (res_denom);

        cout << "\n = " << (res_num/Gcd) << "/" << (res_denom/Gcd);
    }
    void multiply(Fraction *o11, Fraction *o22){
        int res_num = o11->num*o22->num;
        int res_denom = o11->denom*o22->denom;
        int Gcd = __gcd(res_num, res_denom);
        cout << "\nProduct = " << (res_num) << "/" << (res_denom);

        cout << "\n = " << (res_num/Gcd) << "/" << (res_denom/Gcd);
    }
};
int main(){
    Fraction o1,o2;
    cout << "First no:\n";
    o1.get();
    cout << "Second no:\n";
    o2.get();
    o1.add(o1,o2);
    o1.subtract(o1,o2);
    o1.multiply(&o1,&o2);
    
    return 0;
}