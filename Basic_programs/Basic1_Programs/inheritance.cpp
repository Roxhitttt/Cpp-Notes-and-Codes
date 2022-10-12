#include <iostream>
using namespace std;

class pointA
{
    int a;
    public:
        void acceptA()
        {
            cout<<"Enter a";
            cin>>a;
        }
        void displayA()
        {
            cout<<"a="<<a<<endl;
        }
};
class pointB:public pointA
{
    int b;
    public:
    void acceptB()
    {
        cout<<"Enter b";
        cin>>b;
    }
    void displayB()
    {
        cout<<"b="<<b<<endl;
    }
};

int main()
{

    pointB o;
    o.acceptA();
    o.acceptB();
    o.displayA();
    o.displayB();

    return 0;
}