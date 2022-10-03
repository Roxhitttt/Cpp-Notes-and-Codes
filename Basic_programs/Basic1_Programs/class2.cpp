#include <iostream>
using namespace std;
class number
{
    public:
    int a;
    int b;

        void get();
        void show();

};

void number:: get()
{
        cout<<"Enter a"<<endl;
        cin>>a;
        cout<<"Enter b"<<endl;
        cin>>b;
}
    
void number:: show()
{
        cout<<"a:"<<a<<endl;
        cout<<"b:"<<b<<endl;   
}

int main()
{
    number o;
    number o2;
    number o3;
    number o4;

    cout<<"object o"<<endl;
    o.get();
    o.show();

    cout<<"object o2"<<endl;
    o2.get();
    o2.show();

    cout<<"object o3"<<endl;
    o3.a=55;
    o3.b=66;
    o3.show();

    cout<<"object 04"<<endl;
    o4.show();
    o4=o;
    o4.show();


    return 0;
}