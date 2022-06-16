#include<iostream>
#include<string.h>
using namespace std;

class STUDENT
{
	int roll_no;
    string name;
	public:
    void get_b()
    {
        cout<<"Enter Student Roll Number : ";
        cin>>roll_no;
        cout<<"Enter Student Name : ";
        getline(cin>>ws,name);
    }
    int ret_r()
    {
        return roll_no;
    }
    string ret_n()
    {
        return name;
    }
};
class EXAM: public STUDENT
{
    int *arr;
    int nos=6;
	public:
    float ass()
    {
        return nos;
    }
    float res()
    {
        //cout<<"Enter the number of subjects :";
        //cin>>nos;
        arr =new int[nos];
        for(int i=0; i<nos; i++)
        {
            cout<<"Marks of subject "<<(i+1)<<" : ";
            cin>>arr[i];
        }
        float sum=0;
        for(int i=0; i<nos; i++)
        {
            sum += arr[i];
        }
        return sum;
    }
};
class RESULT: public EXAM
{
    float total_marks,per;
    public:
    void get()
    {
        get_b();
        total_marks=res();
        per=total_marks/ass();
    }
    void disp()
    {
        cout<<"Name : "<<ret_n()<<endl;
        cout<<"Roll No. : "<<ret_r()<<endl;
        cout<<"Total Marks : "<<total_marks<<endl;
        cout<<"Percentage : "<<per<<endl;
        if(per>=90.00)
        {
            cout<<"Grade : A+"<<endl;
        }
        else if (per>90.00&&per>=80.00)
        {
            cout<<"Grade : A"<<endl;
        }
        else if (per>80.00&&per>=60.00)
        {
            cout<<"Grade : B"<<endl;
        }
        else if (per>60.00&&per>=50.00)
        {
            cout<<"Grade : C"<<endl;
        }
        else if (per>50.00&&per>=40.00)
        {
            cout<<"Grade : E"<<endl;
        }
       else if (per>40.00)
        {
            cout<<"Grade : F"<<endl;
        }
    }
};

int main()
{
    int z=0,i=0,j=0;
    RESULT *R;
    while(z==0)
    {
        cout<<"----------------------Student INFO---------------------------"<<endl;
        cout<<"1.Add Student INFO"<<endl;
        cout<<"2.Display Student INFO"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"--------------------------------------------------------------"<<endl;
        cout<<"Enter your choice :";
        cin>>i;

        switch (i)
        {
            case 1:
            cout<<"Enter the number of records to add : ";
            cin>>j;
            R=new RESULT[j];
            for(int k=0;k<j;k++)
            {
                cout<<"RECORD : "<<k+1<<endl;
                cout<<"--------------------------------------------"<<endl;
                R[k].get();
                cout<<"RECORDS ADDED SUCCESSFULLY !!!"<<endl;
            }
            break;
            case 2:
            for(int k=0;k<j;k++)
            {
                cout<<"RECORD : "<<k+1<<endl;
                cout<<"--------------------------------------------"<<endl;
                R[k].disp();
            }
            break;
            case 3:
            cout<<"Exiting ..."<<endl;
            z=1;
            break;
            default:
            cout<<"Please enter a valid option !!!"<<endl;
        }
    }
}