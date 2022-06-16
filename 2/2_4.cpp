#include <iostream>
using namespace std; 

class emp
{
    char name[25];
    int id=0;
    float sal=0,net=0;
    public: 
    void get()
    {
        cout<<"\nEnter the Name : ";
        cin>>name;
        cout<<"\nEnter the ID : ";
        cin>>id;
        cout<<"\nEnter the Basic Salary : ";
        cin>>sal;
    }
    void disp()
    {
        net=(0.52*sal)-(0.30*sal)+sal;
        cout<<"\nName : "<<name;
        cout<<"\nID : "<<id;
        cout<<"\nNet Salary : "<<net;
    }
};
int main()
{
    int i=0,z=0,j=0;
    emp *e1;
    while(z==0)
    {
        cout<<"\n-------------------------------------------------";
        cout<<"\n1.Enter employees information";
        cout<<"\n2.Display employees information (With Net Salary)";
        cout<<"\n3.Exit";
        cout<<"\n-------------------------------------------------";
        cout<<"\nEnter the option : ";
        cin>>i;
        switch (i)
        {
        case 1:
            cout<<"\nEnter the number of employees : ";
            cin>>j;
            e1=new emp[j];
            for(int k=0;k<j;k++)
            {
                cout<<"\nEmployee :"<<k+1;
                e1[k].get();
            }
            break;
        case 2:
            for(int k=0;k<j;k++)
            {
                cout<<"\nEmployee :"<<k+1;
                e1[k].disp();
            }
            break;
        case 3:
            cout<<"\nExiting ...";
            z=1;
            break;
        default:
            cout<<"\nPlease enter a valid option !!!";
            break;
        }
    }
}