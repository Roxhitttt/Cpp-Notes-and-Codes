#include<iostream>
using namespace std;
int main()
{
    int i=20;
    int sum=0;
    while(i<=29)
    {
        
        if(i%2==0)
        {
            cout<<i<<endl;
            sum=sum+i;
        }
        i=i+1;
        
    }
    cout<<"Addition of even number from 20 to 30 is :="<<sum<<endl;
    return 0;
}