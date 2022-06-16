#include <iostream>
#include <string.h>
using namespace std;  
class chrstr
{
    char s[30],*p;
    public:
    void get()
    {
    cout<<"Enter the String : ";
    cin>>s;
    }
    void operator==(chrstr str2)
    {
        p= new char[sizeof(s)];
        strcpy(p,str2.s);
        if (strcmp(s,p) == 0)  
        {  
            cout << "\nBoth strings are equal. " << endl;  
        }  
        else
        {          
            cout << "The strings are not equal. " << endl;
            if(strcmp(s,p)==-1)
            {
                cout<<"String "<<s<<" is greater than String "<<p;
            }
            else
            {
                cout<<"String "<<s<<" is lesser than String "<<p;
            }
        }  
        delete p;
    }
};
int main ()  
{  
    chrstr c,r;
    c.get();
    r.get();
    c==r;
    return 0;
}