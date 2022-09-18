#include <iostream>
using namespace std;
int main()
{
    int a,b;
    int c;
    cout<<"Enter the value of a and b";
    cin>>a>>b;

    c=a+b;
    if(c>100)
    {
        cout<<"Addition of a and b is greater than 100";
    }
    if(c<100)
    {
        cout<<"Addition of a and b is less than 100";
    }

    
    
    return 0;
}