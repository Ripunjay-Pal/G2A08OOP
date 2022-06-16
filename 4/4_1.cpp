#include <iostream>
using namespace std; 
class solve
{
private:
float x,y;
public:
float sum(float x,float y);
float avg(float x,float y);
};
float solve::sum(float x,float y)
{
    cout<<"The Sum is : "<<x+y<<endl;
}
float solve::avg(float x,float y)
{
    cout<<"The average is : "<<(x+y)/2<<endl;
}
int main()
{
    float x=0,y=0;
    cout << "Enter integer x : ";
    cin>>x;
    cout << "Enter integer y : ";
    cin>>y;
    solve s;
    s.avg(x,y);
    s.sum(x,y);
}