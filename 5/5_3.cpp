#include <iostream>
using namespace std; 
class constructor
{
    public:
    constructor()
    {
        cout<<"Constructor is called."<<endl;
    }
    ~constructor()
    {
        cout<<"Destructor is called."<<endl;
    }
};
int main()
{
    constructor c,d,e;
}