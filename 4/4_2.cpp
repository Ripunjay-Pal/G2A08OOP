#include <iostream>
using namespace std; 
class sample
{
    int a,b;
    public:
    int set_val()
    {
        cout<<"Enter value of a : ";
        cin>>a;
        cout<<"Enter value of b : ";
        cin>>b;
    }
    int sum();
};
int sample::sum()
{
    cout<<"The Sum is : "<<a+b<<endl;
}
int main()
{
    sample s;
    s.set_val();
    s.sum();
}