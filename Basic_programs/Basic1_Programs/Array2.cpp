#include<iostream>
using namespace std;
int main()
{
    int i;
    float k,a[5];

    for(i=0;i<5;i++)
    {
        cout<<"Enter the element "<<i<<endl;
        cin>>a[i];
    }

    for(i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }

    k=a[0]+a[4];
    cout<<"The sum of 1st and last element of array is "<<k;
    
    return 0;
}