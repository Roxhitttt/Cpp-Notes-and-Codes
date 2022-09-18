#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;

    if(a%3==0)
    {
        cout<<"a is divisible by 3";
    }
    if(a%3!=0)
    {
        cout<<"a is not divisible by 3";
    }
    
    
    return 0;
}