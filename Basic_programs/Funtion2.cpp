#include<iostream>
using namespace std;
int main()
{
    void reader(int, float, char);

    int a;
    float b;
    char c;

    cout<<"\nEnter the value of a:= ";
    cin>>a;
    cout<<"\nEnter the value of b:= ";
    cin>>b;
    cout<<"\nEnter the value of c:= ";
    cin>>c;

    reader(a,b,c);

    return 0;
}

void reader(int l,float m, char n)
{
    cout<<"\nValue of a:= "<<l<<endl;
    cout<<"Value of b:= "<<m<<endl;
    cout<<"Value of c:= "<<n<<endl;
}