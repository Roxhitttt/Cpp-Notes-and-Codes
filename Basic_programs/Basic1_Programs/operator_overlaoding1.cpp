#include <iostream>
using namespace std;

class num
{
    int f;
    float h;
    public:

    num(int m,float n)
    {
        f=m;
        h=n;
    }

    void operator +(num o)
    {
        f=f+o.f;
        h=h+o.h;
    }
    int operator -(num o)
    {
        f=f-o.f;
        return f;
    }
    float operator *(num op)
    {
        h=h*op.h;
        return h;
    }
    num operator /(num op)
    {
        num ob;
        ob.t=t/op.t;
        ob.h=h/op.h;

        return ob;
    }
    void display()
    {
        cout<<"Output is f="<<f<<" h="<<h<<endl;
    }
    
};

int main()
{
    int t,h,t1,h1;
    cout<<"Enter lst number";
    cin>>t;
    cout<<"Enter 2st number";
    cin>>h;
    num o(t,h);
    
    cout<<"Enter lst number";
    cin>>t1;
    cout<<"Enter 2st number";
    cin>>h1;
    num o2(t1,h1);

    o.display();
    o2.display();

    o+o2;
    o.display();
    o2+o;
    o2.display();
    int x=o-o2;
    cout<<"x="<<x<<endl;
    float k=o*o2;
    cout<<"k="<<k<<endl;

    num o3=o/o2;
    o3.display();


    return 0;
}