#include <iostream>
using namespace std;

int main()
{
    float x=0,y=0;
    cout << "Enter value x : ";
    cin>>x;
    cout << "Enter value y : ";
    cin>>y;
    if(x>y)
    {
        cout<< "The maximum value between "<<x<<" and "<<y<<" is "<<x<<".";
    }
    else
    {
        cout<< "The maximum value between "<<x<<" and "<<y<<" is "<<y<<".";
    }
}