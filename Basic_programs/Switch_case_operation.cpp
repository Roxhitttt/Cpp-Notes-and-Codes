#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20,r;
    char c;
    cout<<"a for addition\n s for substraction\n m for multiplication\n d for division\n Enter your choice\n";
    cin>>c;

    switch(c)
    {
        case 'a':
        r=a+b;
        cout<<"Addition is :"<<r;
        break;

        case 's':
        r=a-b;
        cout<<"Substraction is :"<<r;
        break;

        case 'm':
        r=a*b;
        cout<<"Multiplication is :"<<r;
        break;

        case 'd':
        r=a/b;
        cout<<"Division is :"<<r;
        break;

        default:
        cout<<"Enter a correct input from a,s,m,d\n";
    }

    return 0;
}