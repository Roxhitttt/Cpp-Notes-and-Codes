#include<iostream>
using namespace std;
int main()
{
    void swap(int, int);

    int a,b;
    cout<<"Enter the value of a and b:=\n";
    cin>>a>>b;

    cout<<"Before Swapping\n";

    cout<<"\na="<<a;
    cout<<"\nb="<<b;
    swap(a,b);

    return 0;
}

void swap(int l, int m)
{
    int t;
    t=l;
    l=m;
    m=t;
    cout<<"\nAfter swapping";
    cout<<"\na="<<l;
    cout<<"\nb="<<m;

}