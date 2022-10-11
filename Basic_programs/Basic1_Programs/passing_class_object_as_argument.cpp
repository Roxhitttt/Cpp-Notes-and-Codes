#include<iostream>
using namespace std;

class operation
{
    int a,b;
    public:

    void get()
    {
        cout<<"Enter 1st no: "<<endl;
        cin>>a;
        cout<<"Enter 2nd no: "<<endl;
        cin>>b;
    }

    void add(operation l)
    {
        a=a+l.a;
        b=b+l.b;
    }

    void display()
    {
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
    }
};

int main()
{
    int m,n;
    operation o1;
    o1.get();
    o1.display();
    operation o;
    o.get();
    o.display();
    o.add(o1);
    o.display();

    return 0;
}