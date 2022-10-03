#include<iostream>
using namespace std;

class operation
{
    public:
    int a;
    int b;
    int c;

        void get();
        void show();
        void add();
        void sub();
        void mul();
        void div();
};

void operation:: get()
{
    cout<<"Enter a: "<<endl;
    cin>>a;
    cout<<"Enter b: "<<endl;
    cin>>b;
}

void operation:: show()
{
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
}

void operation:: add()
{
    c=a+b;
    cout<<"c: "<<c<<endl;
}

void operation:: sub()
{
    c=a-b;
    cout<<"c: "<<c<<endl;
}

void operation:: mul()
{
    c=a*b;
    cout<<"c: "<<c<<endl;
}

void operation:: div()
{
    c=a/b;
    cout<<"c: "<<c<<endl;
}



int main()
{
    operation o;

    o.get();
    o.show();

    o.add();

    o.sub();

    o.mul();

    o.div();
    


    return 0;
}