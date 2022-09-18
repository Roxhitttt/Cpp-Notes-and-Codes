#include <iostream>
using namespace std;
int main()
{
    char name[20];
    int attempt;
    int r;
    float percentage;
    
    cout<<"Enter your name: "<<"\n";
    cin>>name;
    
    cout<<"Enter the attempt you have made: "<<"\n";
    cin>>attempt;

    cout<<"Enter the percentage you have got: "<<"\n";
    cin>>percentage;

    r=(attempt==1)&&(percentage>=60);
    cout<<"Selection is :"<<r<<"\n";

    return 0;
}