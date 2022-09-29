#include<iostream>
using namespace std;
int main()
{
    void fact();    // Function declaration.

    fact();         // Function call.
    return 0;
}

void fact()         // Function defination.
{
    int i,fact,n;
    i=1;
    fact=1;
    cout<<"Enter a number:\n";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<fact<<endl;
}