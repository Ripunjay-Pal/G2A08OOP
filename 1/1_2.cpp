#include <iostream>
using namespace std; 

int main()
{
    int x=0;
    float y=0;
    char z[25];
    cout << "Enter integer x : ";
    cin>>x;
    cout << "Enter float y : ";
    cin>>y;
    cout << "Enter character z (Maximum 25 characters without spaces) : ";
    cin>>z;
    cout<< "The integer input x is '" << x << "'." << endl;
    cout<< "The float input y is '" << y << "'." << endl;
    cout<< "The character input z is '" << z << "'." << endl;
}