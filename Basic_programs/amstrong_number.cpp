//Wether given number is amstrong number or not 

#include<iostream>
using namespace std;
int main()
{
    int n,n1,r1,n2,r2;
    int c1,c2,c3;
    int a;
    cout<<"Enter the 3 digit number:\n";
    cin>>n;

    //371

    n1=n/100;
    cout<<"First digit from 3 digit number is n1:"<<n1<<endl;  //3

    r1=n%100;
    cout<<"Reminder of n1 is r1: "<<r1<<endl;  //71

    n2=r1/10;
    cout<<"Second digit from 3 digit number is n2:"<<n2<<endl;  //7

    r2=r1%10;
    cout<<"Third digit from 3 digit number is r2:"<<r2<<endl;  //1

    c1=n1*n1*n1;
    cout<<"Cube of n1 is:"<<c1<<endl;

    c2=n2*n2*n2;
    cout<<"Cube of n2 is:"<<c2<<endl;

    c3=r2*r2*r2;
    cout<<"Cube of r2 is:"<<c3<<endl;

    a=c1+c2+c3;
    cout<<"Addition of c1+c2+c3 = "<<a<<endl;

    if(a==n)
    {
        cout<<"Number is Amstrong"<<endl;
    }
    else
    {
        cout<<"Number is not Amstrong"<<endl;
    }
    
    return 0;
}