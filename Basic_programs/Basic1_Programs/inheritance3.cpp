#include<iostream>
using namespace std;

class first
{
    protected:
    int a,b;
    public:
    void show()
    {
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
    }
};

class second:public first
{
    int l;
    public:
    void accept()
    {
        a=10;
        b=20;
        l=40;
    }
    void display()
    {
        cout<<"l= "<<l<<endl;
    }
};

int main()
{
    second o;
    o.accept();
    o.show();
    o.display();

    return 0;
}