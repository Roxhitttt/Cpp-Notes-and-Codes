#include<iostream>
using namespace std;
int main()
{
    void swap(int *,int *);
    int a,b;

    cout<<"enter a";
    cin>>a;
    cout<<"enter b";
    cin>>b;
    cout<<"befor swap"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    swap(&a,&b);
    cout<<"After swaping"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    
return 0;
}
void swap(int *l,int *m)
{
    int c;
    c=*l;
    *l=*m;
    *m=c;
}