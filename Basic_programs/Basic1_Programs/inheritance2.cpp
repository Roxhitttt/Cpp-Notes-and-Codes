#include<iostream>
using namespace std;

class first
{
    private:
    int c;
    public:
        int a,b;

        void addc()
        {
            c=23;
        }
        void show1()
        {
            cout<<"a="<<a<<endl;
            cout<<"b="<<b<<endl;
            cout<<"c="<<c<<endl;
        }
};

class second:private first
{
    public:
    int l,m;
    void add()
    {
        addc();
        a=10;
        b=20;
    }
    void show2()
    {
        show1();
        cout<<"l= "<<l<<endl;
        cout<<"m= "<<m<<endl;
        
    }
};

int main()
{
    second o;
    o.add();
    o.l=30;
    o.m=55;
    o.show2();

    return 0;
}