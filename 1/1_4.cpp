#include <iostream>
using namespace std; 

int main()
{
    int i[5],j=0;
    while(j<5)
    {
        cout<<"Enter the No. "<<j+1<<" element of the array (Maximum 5 entries) : ";
        cin>>i[j];
        j++;
    }
    cout<<"The array is : [ ";
    j=0;
    while (j<5)
    {
        cout<<i[j]<<" ";
        j++;
    }
    cout<<"]";
}