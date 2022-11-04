#include<iostream>
using namespace std;
class number
{
    int a;
    public:
    number &setData(int a)
    {
        this->a=a;
        return *this;
    }
    void getData()
    {
        cout<<a;
    }
};
int main()
{
    number l;
    number k=l.setData(5);
    k.getData();
}