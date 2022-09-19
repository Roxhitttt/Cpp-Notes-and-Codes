#include<iostream>
using namespace std;
int main()
{
    int n,n1,n2,n3,r1,r2,r3;
    int c1,c2,c3,c4;
    int a;

    cout<<"Enter a 4 digit number:=\n";
    cin>>n;

    n1=n/1000;
    cout<<"First digit from 4 digit number is n1:"<<n1<<endl; 
    cout<<"\n"; 

    r1=n%1000;
    cout<<"Reminder of n1 is r1: "<<r1<<endl; 
    cout<<"\n"; 

    n2=r1/100;
    cout<<"Second digit from 4 digit number is n2:"<<n2<<endl; 
    cout<<"\n";
    
    r2=r1%100;
    cout<<"Reminder of is r2: "<<r2<<endl; 
    cout<<"\n";

    n3=r2/10;
    cout<<"Third digit from 4 digit number is n3:"<<n3<<endl;
    cout<<"\n";

    r3=r2%10;
    cout<<"Fourth digit from 4 digit number is r3:"<<r3<<endl;
    cout<<"\n";

    c1=n1*n1*n1;
    cout<<"Cube of 1 st digit c1 is:="<<c1<<endl;
    cout<<"\n";

    c2=n2*n2*n2;
    cout<<"Cube of 2 st digit c2 is:="<<c2<<endl;
    cout<<"\n";

    c3=n3*n3*n3;
    cout<<"Cube of 3 st digit c3 is:="<<c3<<endl;
    cout<<"\n";

    c4=r3*r3*r3;
    cout<<"Cube of 4 st digit c4 is:="<<c4<<endl;
    cout<<"\n";

    a=c1+c2+c3+c4;
    cout<<"Addition of these 3 cubes c1+c2+c3+c4 is:="<<a<<endl;
    cout<<"\n";

    if(a%4==0)
    {
        cout<<"The 4 Digit Number is divisible by 4"<<endl;
        cout<<"\n";
    }
    else
    {
        cout<<"The 4 Digit Number is not divisible by 4"<<endl;
        cout<<"\n";
    }

    return 0;
}