#include<iostream>
using namespace std;

class number
{
    int no1;
    int no2;
    public:

    number(int n1, int n2)
    {
        no1=n1;
        no2=n2;
    }

    void display()
    {
        cout<<"First no: "<<no1<<endl;
        cout<<"second no: "<<no2<<endl;
    }


};

int main()
{
    int a,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    number o(a,b);
    o.display();

    
    return 0;
}