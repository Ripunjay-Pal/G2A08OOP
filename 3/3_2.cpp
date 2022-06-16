#include <iostream>
using namespace std; 
class time
{
    int hour=0,minutes=0;
    public:
    void gettime()
    {
        cout<<"Enter Hour : ";
        cin>>hour;
        cout<<"Enter Minutes : ";
        cin>>minutes;
    }
    void puttime()
    {
        cout<<"Hour : "<<hour<<endl;
        cout<<"Minutes : "<<minutes<<endl;
    }
    void sum(time t1,time t2)
    {
        int h1=0,m1=0,h2=0,m2=0,sum=0;
        h1=t1.hour*60;
        h2=t2.hour*60;
        sum=h1+h2+t1.minutes+t2.minutes;
        m1=sum/60;
        m2=sum%=60;
        cout<<"Hours : "<<m1<<endl<<"Minutes : "<<m2<<endl;
    }
};
int main()
{
    time t1,t2,t3;
    t1.gettime();
    t2.gettime();
    t3.sum(t1,t2);
}