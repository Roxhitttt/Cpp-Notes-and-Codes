#include<iostream>
using namespace std;

class demooperator
{
    int a;
    public:
    demooperator(int l)
    {
        a=l;
    }

    int operator -(demooperator l)
    {
        int r=a-l.a;
        return r;
    }
};

int main()
{
    demooperator o1(50);
    demooperator o2(20);
    int r=o2-o1;
    cout<<r;
    return 0;
}