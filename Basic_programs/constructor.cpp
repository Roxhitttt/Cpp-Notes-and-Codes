#include<iostream>
using namespace std;

class democontruct
{
    int a;
    int b;
    
    public:

    democontruct()
    {
        a=10;
        b=20;
    }

    void display()
    {
        cout<<"Value of a: "<<a<<endl;
        cout<<"Value of b: "<<b<<endl;
    }

};

int main()
{
    democontruct d;
    d.display();
    return 0;
}