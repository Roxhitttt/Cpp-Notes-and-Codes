#include<iostream>
using namespace std;

class number
{
    public:
    int x;
    int y;
    number(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    void display()
    {
        cout<<"x"<<x<<endl;
        cout<<"y"<<y<<endl;
    }
};

int main()
{
    number o(5,7);
    o.display();

    return 0;
}