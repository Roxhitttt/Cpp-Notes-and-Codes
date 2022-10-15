#include<iostream>
using namespace std;

class A
{
    private:
    int n1;
    public:
    

    void ask1()
    {
        cout<<"Enter the value of n1: "<<endl;
        cin>>n1;
    }
    
    void display1()
    {
        cout<<"Value of n1: "<<n1<<endl;
    }

};
class B:private A
{
    private:
    int n2;
    public:
    void ask2()
    {
        ask1();
        cout<<"Enter the value of n2: "<<endl;
        cin>>n2;
    }
    
    void display2()
    {
        display1();
        cout<<"Value of n2: "<<n2<<endl;
    }
};
class C:private B
{
    private:
    int n3;
    public:
    

    void ask3()
    {
        ask2();
        cout<<"Enter the value of n3: "<<endl;
        cin>>n3;
    }
    
    void display3()
    {
        display2();
        cout<<"Value of n3: "<<n3<<endl;
    }
};

int main()
{
    C l;
    l.ask3();
    l.display3();

    return 0;
}