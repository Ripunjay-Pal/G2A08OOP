#include <iostream>
using namespace std; 

class Person
{
    int age=0;
    string name;
    public:
    void inp()
    {
        cout << "Please enter Name : ";
        getline (cin, name);
        cout << "Please enter Age : ";
        cin >> age;
    }
    void disp()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    Person P1;
    P1.inp();
    P1.disp();
}