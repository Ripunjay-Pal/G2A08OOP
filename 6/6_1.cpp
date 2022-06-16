#include <iostream>
using namespace std; 
class book
{
    string book_id,book_name,publisher_name;
    public:
    void get()
    {
        cout<<"Enter Book ID : ";
        getline(cin>>ws,book_id);
        cout<<"Enter Book Name : ";
        getline(cin>>ws,book_name);
        cout<<"Enter Book Publisher's Name : ";
        getline(cin>>ws,publisher_name);
    }
    void display()
    {
        cout<<"Enter Book ID : "<<book_id<<endl;
        cout<<"Enter Book Name : "<<book_name<<endl;
        cout<<"Enter Book Publisher's Name : "<<publisher_name<<endl;
    }
};
int main()
{
    int j=5;
    book *b1=new book[j];
    for (int i = 0; i < j; i++)
    {
        cout<<"Record : "<<i+1<<endl;
        b1[i].get();
        cout<<"---------------------------------"<<endl;
    }
    cout << "The List is as follows:"<<endl;
    for (int i = 0; i < j; i++)
    {
        cout<<"Record : "<<i+1<<endl;
        b1[i].display();
        cout<<"---------------------------------"<<endl;
    }
    delete b1;
}