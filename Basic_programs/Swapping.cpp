#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int k;
    cout<<"Enter the value of i:= ";
    cin>>i;
    cout<<"Enter the value of j:= ";
    cin>>j;

    k=i;

    i=j;
    cout<<"j= "<<i<<endl;

    j=k;
    cout<<"i= "<<j<<endl;

    return 0;
}