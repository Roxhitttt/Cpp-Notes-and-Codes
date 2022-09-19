#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
    cout<<"a for addition\n s for substraction\n m for multiplication\n d for division\n Enter your choice\n";
    cin>>c;

    switch(c)
    {
        case 'a':
        c=a+b;
        cout<<"Addition is :"<<c;
        break;

        case 's':
        c=a-b;
        cout<<"Substraction is :"<<c;
        break;

        case 'm':
        c=a*b;
        cout<<"Multiplication is :"<<c;
        break;

        case 'd':
        c=a/b;
        cout<<"Division is :"<<c;
        break;

        default:
        cout<<"Enter a correct input from a,s,m,d\n";
    }

    return 0;
}