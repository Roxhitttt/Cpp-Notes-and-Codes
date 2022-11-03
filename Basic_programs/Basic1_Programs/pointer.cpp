#include<iostream>
using namespace std;
int main()
{
    int a;
    a=10;
    int *p;
    p=&a;

    cout<<"a="<<a<<endl;
    cout<<"&a=  "<<&a<<endl;
    cout<<"p="<<p<<endl;
    cout<<"*p="<<*p<<endl;

    return 0;
}