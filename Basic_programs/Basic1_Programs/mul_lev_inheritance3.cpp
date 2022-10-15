#include<iostream>
using namespace std;

class A
{
    protected:
    int n1;
    void display1()
    {
        cout<<"Value of n1: "<<n1<<endl;
    }

};
class B:protected A
{
   protected:
    int n2;
    void display2()
    {
        
        cout<<"Value of n2: "<<n2<<endl;
    }
};
class C:protected B
{
    protected:
    int n3;
    public:
    

    void ask3()
    {
        cout<<"Enter the value of n1: "<<endl;
        cin>>n1;
        cout<<"Enter the value of n2: "<<endl;
        cin>>n2;
        cout<<"Enter the value of n3: "<<endl;
        cin>>n3;
    }
    
    void display3()
    {
        display1();
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