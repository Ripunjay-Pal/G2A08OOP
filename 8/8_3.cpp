#include <iostream>
using namespace std; 

class basic_info
{
    string name;
    int roll_no=0;
    char gender;
    public:
    void getdata()
    {
        cout<<"Enter Name : ";
        getline(cin,name);
        cout<<"Enter Roll Number : ";
        cin>>roll_no;
        cout<<"Enter Gender (M,F or T) : ";
        cin>>gender;
    }
    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Roll Number : "<<roll_no<<endl;
        cout<<"Gender : "<<gender<<endl;
    }
};
class physical_fit:public basic_info
{
    float height=0,weight=0;
    public:
    void getdata()
    {
        basic_info::getdata();
        cout<<"Enter Height (in cms) : ";
        cin>>height;
        cout<<"Enter Weight (in kgs) : ";
        cin>>weight;
    }
    void display()
    {
        basic_info::display();
        cout<<"Height (in cms) : "<<height<<endl;
        cout<<"Weight (in kgs) : "<<weight<<endl;
    }
};
int main()
{
    physical_fit p1;
    p1.getdata();
    p1.display();
}