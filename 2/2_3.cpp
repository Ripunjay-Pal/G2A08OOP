#include <iostream>
using namespace std;

class bank
{
    float amt=0,n=0;
    public:
    void ini_amt()
    {
        cout<<"Enter the intial amount of the account : ";
        cin>>amt;
    }
    void wdrw()
    {
        cout << "Enter the amount to withdraw : ";
        cin>>n;
        if(amt<n)
        {
            cout<<"Insufficient Account Balance !!! Please try again."<<endl;
        }
        else
        {
            amt-=n;
            cout<<"Amount successfully withdrawn! Current balance : "<<amt<<endl;
        }

    }
    void deps()
    {
        cout << "Enter the amount to deposit : ";
        cin>>n;
        amt+=n;
        cout<<"Amount successfully deposited! Current balance : "<<amt<<endl;
    }
    void disp()
    {
        cout << "The current balance in your account is :" << amt<<endl;
    }
    void menu()
    {
        cout<<"----------------------Bank---------------------------"<<endl;
        cout<<"Current Balance is : "<<amt<<endl;
        cout<<"1. Initialize"<<endl;
        cout<<"2. Withdraw"<<endl;
        cout<<"3. Deposit"<<endl;
        cout<<"4. Balance Display"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice :";
    }
};

int main()
{   
    int z=0,i=0;
    bank b1;
    while(i==0)
    {
        b1.menu();
        cin>>z;
        switch (z)
        {
            case 1:
                b1.ini_amt();
                break;
            case 2:
                b1.wdrw();
                break;
            case 3:
                b1.deps();
                break;
            case 4:
                b1.disp();
                break;
            case 5:
                cout<<"Exiting ..."<<endl;
                i=1;
                break;
            default:
            cout<<"Please enter a valid option !!!"<<endl;
        }
    }
}