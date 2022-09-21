#include<iostream>
using namespace std;
int main()
{
    int n,i=2;
    int f=0;
    cout<<"Enter a number";
    cin>>n;

    while(i<=n)
    {
        if(n%i==0)
        {
            if(n==i)
            {
                cout<<"Number is prime\n";
                f=1;
                break;
            }
        }
    i=i+1;
    }
    
    if(f==0)
    {
        cout<<"Number is not prime\n";
    }
    return 0;
}