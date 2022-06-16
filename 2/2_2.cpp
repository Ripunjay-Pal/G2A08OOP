#include<iostream> 
using namespace std;
   
int x;

class A 
{
public: 
  
   void fun();
};
  
void A::fun()
{
   cout << "fun() called" << endl;
}

int main()
{
  int x = 10;
  A a;
  a.fun();
  cout << "Value of global x is " << ::x << endl;
  cout << "Value of local x is " << x << endl;
  return 0;
}