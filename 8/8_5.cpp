#include <iostream>
using namespace std; 

class SHAPE
{
    public:
    double i=0,j=0;
    void getdata();
    virtual void display()=0;
};
class TRIANGLE:public SHAPE
{
    public:
    void display()
    {
        cout<<"Area of Triangle is : "<<0.5*i*j<<" cms."<<endl;
    }
};
class SQUARE:public SHAPE
{
    public:
    void display()
    {
        cout<<"Area of Square is : "<<i*j<<" cms."<<endl;
    }
};
void SHAPE::getdata()
{
    cout<<"Enter Input A: ";
    cin>>i;
    cout<<"Enter Input B: ";
    cin>>j;
}

int main()
{
    TRIANGLE T;
    SHAPE *ST=&T;
    cout<<"Enter the Base and Height in cms :\n";
    ST->getdata();
    ST->display();
    SQUARE S;
    SHAPE *SS=&S;
    cout<<"Enter the Side in cms :\n";
    SS->getdata();
    SS->display();
}