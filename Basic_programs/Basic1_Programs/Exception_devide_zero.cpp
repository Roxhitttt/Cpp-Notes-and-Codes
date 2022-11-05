#include<iostream>
using namespace std;
int main()
{
    try
    {
            int a,b;
            cout<<"Enter a";
            cin>>a;
            cout<<"Enter b";
            cin>>b;
            if(b==0)
            {
                throw 0;
            }
            int c=a/b;
            cout<<"Division is"<<c;
    }
    catch(int e)
    {
        cout<<"Division by zero";
    }
    return 0;
}