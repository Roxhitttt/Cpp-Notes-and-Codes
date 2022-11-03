#include<iostream>
using namespace std;
int main()
{
    void min(int *,int *);
    int a;
    int b;
    a=10;
    b=20;
    int *p;
    p=&a;
    int *q;
    q=&b;
    min(p,q);

    
    return 0;
}
void min(int *p,int *q)
{
    int m=0;
    if(*p>*q)
    {
        cout<<*p;
    }
    else
    {
        cout<<*q;
    }
}