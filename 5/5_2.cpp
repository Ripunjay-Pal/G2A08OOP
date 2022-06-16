#include <iostream>
#include <math.h>
using namespace std; 
class area
{
    float a,b,c,s,pi=3.14;
    public:
    area(float a)
    {
        cout<<"Area of the circle is : "<<pi*a*a<<endl;
    }
    area(float a,float b,float c,float s=0)
    {   
        s=(a+b+c)/2;
        cout<<"Area of the triangle is : "<<sqrt(s*(s-a)*(s-b)*(s-c))<<endl;
    }
    area(float a,float b)
    {
        cout<<"Area of the rectangle is : "<<a*b<<endl;
    }
};
int main()
{   
    int z=0,i=0;
    float a=0,b=0,c=0,s=0;
    double bd;
    while(i==0)
    {
        cout<<"----------------------Area Calculator---------------------------"<<endl;
        cout<<"1. Circle"<<endl;
        cout<<"2. Triangle"<<endl;
        cout<<"3. Rectangle"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice :";
        cin>>z;
        switch (z)
        {
            case 1:
            {
                cout<<"Enter the radius : ";
                cin>>a;
                area ac(a);
                break;
            }
            case 2:
            {
                cout<<"Enter Side A : ";
                cin>>a;
                cout<<"Enter Side B : ";
                cin>>b;
                cout<<"Enter Side C : ";
                cin>>c;                
                s=(a+b+c)/2;
                area at(a,b,c);
                break;
            }
            case 3:
            {
                cout<<"Enter the length : ";
                cin>>a;
                cout<<"Enter the breadth : ";
                cin>>b;
                area ar(a,b);
                break;
            }
            case 4:
            {
                cout<<"Exiting ..."<<endl;
                i=1;
                break;
            }
            default:
            cout<<"Please enter a valid option !!!"<<endl;
        }
    }
}