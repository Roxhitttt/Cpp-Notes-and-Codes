#include<iostream>
using namespace std;
int main()
{
    int a,b;
    bool c;
    a=96;
    b=84;
   
    c=a>b;
    cout<<">"<<c;

    c=a<b;
    cout<<"\n<"<<c;

    c=a>=b;
    cout<<"\n>="<<c;

    c=a<=b;
    cout<<"\n<="<<c;

    c=a==b;
    cout<<"\n=="<<c;

    c=a!=b;
    cout<<"\n!="<<c;

    return 0;
}