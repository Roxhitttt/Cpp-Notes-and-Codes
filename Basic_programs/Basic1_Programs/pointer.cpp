#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    a=10;
    b=20;
    int *p;
    p=&a;
    int *q;
    q=&b;

    cout<<"a="<<a<<endl;
    cout<<"&a=  "<<&a<<endl;
    cout<<"p="<<p<<endl;
    cout<<"*p="<<*p<<endl;

    int c;
    c=*p+*q;
    cout<<"Addition of "<<*p<<" and "<<*q<<" is "<<c;

    return 0;
}