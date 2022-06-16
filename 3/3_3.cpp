#include <iostream>
#include<math.h>
using namespace std; 
class root
{
    float a, b, c, x1, x2, d, rp, ip;
    public:
    void calc(float a,float c,float b=0)
    {
        d = b*b - 4*a*c;
        if (d > 0)
        {
            x1 = (-b + sqrt(d)) / (2*a);
            x2 = (-b - sqrt(d)) / (2*a);
            cout << "Roots are real and different." << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
        else if (d == 0)
        {
            cout << "Roots are real and same." << endl;
            x1 = -b/(2*a);
            cout << "x1 = x2 =" << x1 << endl;
        }
        else
        {
            rp = -b/(2*a);
            ip =sqrt(-d)/(2*a);
            cout << "Roots are complex and different."  << endl;
            cout << "x1 = " << rp << "+" << ip << "i" << endl;
            cout << "x2 = " << rp << "-" << ip << "i" << endl;
        }
    }
};
int main()
{
    root r1;
    float a, b, c;
    cout<<"Enter coefficient a : ";
    cin>>a;
    cout<<"Enter coefficient b : ";
    cin>>b;
    cout<<"Enter coefficient c : ";
    cin>>c;
    r1.calc(a,c,b);
    return 0;
}