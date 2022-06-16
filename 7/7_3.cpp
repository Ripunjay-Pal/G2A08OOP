#include <iostream>
#include <string.h>
using namespace std;
class string1
{
    char str[20];

public:
    void input()
    {
        cout << "Enter your String: ";
        cin >> str;
    }
    void display()
    {
        cout << "String is: " << str;
    }
    void operator=(string1 s1)
    {
        strcpy(str, s1.str);
    }
};
int main()
{
    string1 str1, str2;
    str1.input();
    str2 = str1;
    str2.display();
}