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
cout<<fact;
    return 0;
}