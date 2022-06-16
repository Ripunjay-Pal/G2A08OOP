#include <iostream>
using namespace std; 
class employee
{
    char name[25];
    float age;
    public:
    void get()
    {
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Age : ";
        cin>>age;
    }
    void putdata()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
int main()
{
    int n=5;
    employee e[n];
    for(int i=0;i<5;i++)
    {
        e[i].get();
    }
    for(int i=0;i<5;i++)
    {
        e[i].putdata();
    }
}