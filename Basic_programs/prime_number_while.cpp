#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int f=1;
    i=2;
    cout<<"Enter a number";
    cin>>n;

    while(i<=n)
    {
        if(n%i==0 && n!=i)
        {
            f=0;
        }
    i=i+1;
    }
    
    if(f==0)
    {
        cout<<"Number is not prime\n";
    }
    else
    {
        cout<<"Number is prime\n";
    }
    
    return 0;
}