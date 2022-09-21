#include<iostream>
using namespace std;
int main()
{

int i=1,fact=1,number;
    cout<<"Enter a number\n";
    cin>>number;
    while(i<=number)
{
    fact=fact*i;
    i++;
    
}
cout<<fact<<endl;


int a,b=1;
cout<<"Enter number"<<endl;
cin>>a;

while(a>=1)
{
    b=b*a;
    a--;
}
cout<<b;
    return 0;
}