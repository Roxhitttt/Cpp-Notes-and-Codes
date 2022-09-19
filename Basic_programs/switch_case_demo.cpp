#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter a Month\n";
    cin>>a;

    switch(a)
    {
        case 'l':cout<<"January";
        break;
        case 'm':cout<<"Faburary";
        break;
        case 'n':cout<<"March";
        break;
        case 'o':cout<<"April";
        break;
        default:
        cout<<"Enter a correct input between l to o";
    }

    return 0;
}