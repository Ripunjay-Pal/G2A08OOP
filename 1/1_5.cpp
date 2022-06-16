#include <iostream>
using namespace std;

int main()
{
    char oper;
    float num1, num2,i;
    while(i!=0)
    {
        cout << "Enter an operator (+, -, *, /) or Q to Quit : ";
        cin >> oper;
        if(oper=='Q')
        {
            i=0;
            break;
        }
        else
        {
            cout << "Enter number 1 : ";
            cin >> num1;
            cout << "Enter number 2 : ";
            cin >> num2;
            switch (oper)
            {
                case '+':
                    cout << num1 << " + " << num2 << " = " << num1 + num2<<endl;
                    break;
                case '-':
                    cout << num1 << " - " << num2 << " = " << num1 - num2<<endl;
                    break;
                case '*':
                    cout << num1 << " * " << num2 << " = " << num1 * num2<<endl;
                    break;
                case '/':
                    cout << num1 << " / " << num2 << " = " << num1 / num2<<endl;
                    break;
                default:
                    cout << "Error! The operator is not correct";
                    return 1;
            }
        }
    }    
    cout<<"QUIT";
    return 0;
}