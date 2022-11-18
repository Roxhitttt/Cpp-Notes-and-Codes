#include<iostream>
using namespace std;
namespace first
{
    void name()
    {
        cout<<"IANT"<<endl;
    }
}
namespace second
{
    void name()
    {
        cout<<"Rahul"<<endl;
    }
}
using namespace first;
int main()
{
    name();
    second::name();

    return 0;
}