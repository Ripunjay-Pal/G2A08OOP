#include <iostream>
using namespace std; 
class employee
{
    public:
    int emp_id=0;
    float salary=0;
    string name;
    void get()
    {
        cout<<"Enter Employee ID : ";
        cin>>emp_id;
        cout<<"Enter Employee Name : ";
        getline(cin>>ws,name);
        cout<<"Enter Employee Salary : ";
        cin>>salary;
    }
    void display()
    {
        cout<<"Employee ID : "<<emp_id<<endl;
        cout<<"Employee Name : "<<name<<endl;
        cout<<"Employee Salary : "<<salary<<endl;
    }
};
void sort(employee e[])
{
    int id=0;
    float sal=0;
    string nm;
    int size=sizeof(e)+1;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(e[i].salary<e[j].salary)
            {
                id=e[i].emp_id;
                sal=e[i].salary;
                nm=e[i].name;
				e[i]=e[j];
				e[j].emp_id=id;
				e[j].salary=sal;
				e[j].name=nm;
            }
        }
    }
}
int main()
{
    employee e[5];
    for (int i = 0; i < 5; i++)
    {
        e[i].get();
    }
    sort(e);
    for (int i = 0; i < 5; i++)
    {
        e[i].display();
    }
    delete e;
    return 0;
}