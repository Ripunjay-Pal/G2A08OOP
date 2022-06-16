#include<iostream>
using namespace std;
class emp_name
{
	public:
    string name;
    int id;
    emp_name()
    {
        cout << "Enter Employee's Name: ";
        getline(cin>>ws,name);
        cout << "Enter Employee's ID: ";
        cin >> id;
    }
};
class emp_salary : public emp_name
{
    protected:
    float salary;
	public:
    emp_salary()
    {
        cout << "Enter Employee's Salary: ";
        cin >> salary;
    }

};
class emp_display : public emp_salary
{
	public:
    emp_display()
    {
        cout << "Name: " << name << endl; 
        cout << "ID: " << id << endl; 
        cout << "Salary: " << salary << endl; 
    }
};
class emp_single : public emp_name
{
    float salary;
	public:
    emp_single()
    {
        cout << "Enter Employee's Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
	emp_display E1;
	emp_single S1;
	S1.display();
	return 0;
}