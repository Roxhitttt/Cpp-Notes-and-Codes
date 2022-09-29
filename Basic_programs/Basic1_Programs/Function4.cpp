#include<iostream>
using namespace std;
int main()
{
    int display(int);

    int a,c;

    cout<<"Enter the ammount:= ";
    cin>>a;

    c=display(a);

    cout<<"Discount on the ammount is: "<<c<<endl;
    
    a=a-c;
    cout<<"You have to pay ammount: "<<a<<endl;

    return 0;
}

int display(int l)
{
    float n;
    n=(l*10)/100;



    return n;

}