#include<iostream>
using namespace std;
int main()
{
    float add(float, float, float);

    float a,b,c,r;

    cout<<"Enter the value of a,b,c:\n";
    cin>>a>>b>>c;

    r=add(a,b,c);
    cout<<"Addition of "<<a<<" , "<<b<<" and "<<c<<" is "<<r<<endl;

    return 0;
}

float add(float l,float m,float n)
{
    float x;
    x=l+m+n;

    return x;
}