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
        cout<<"Addition is :";
        break;

        case 's':
        c=a-b;
        cout<<"Substraction is :";
        break;

        case 'm':
        c=a*b;
        cout<<"Multiplication is :";
        break;

        case 'd':
        c=a/b;
        cout<<"Division is :";
        break;

        default:
        cout<<"Enter a correct input from a,s,m,d\n";
    }

    return 0;
}