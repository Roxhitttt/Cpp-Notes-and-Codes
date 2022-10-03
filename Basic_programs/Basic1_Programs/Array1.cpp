#include<iostream>
using namespace std;
int main()
{
    int i,a[10];

    for(i=0;i<10;i++)
    {
        cout<<"Enter element at : "<<i;
        cin>>a[i];
    }

    cout<<"Array elements are: ";

    for(i=0;i<10;i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}