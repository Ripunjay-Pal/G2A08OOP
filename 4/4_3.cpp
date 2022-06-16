#include <iostream>
using namespace std;
class truck;
class car
{
    float speed;
    public:
    void get()
    {
        cout<<"Enter speed of car (in kmh) : ";
        cin>>speed;
    }
    friend void speed(car c,truck t);
};
class truck
{
    float speed;
    public:
    void get()
    {
        cout<<"Enter speed of truck (in kmh) : ";
        cin>>speed;
    }
    friend void speed(car c,truck t);
};
void speed(car c,truck t)
{
    if(c.speed>t.speed)
    {
        cout<<"Speed of car at : "<<c.speed<<" kmh is greater."<<endl;
    }
    else
    {
        cout<<"Speed of truck at : "<<t.speed<<" kmh is greater."<<endl;
    }
}
int main()
{
    car c;
    truck t;
    c.get();
    t.get();
    speed(c,t);
    return 0;
}