#include<iostream>
using namespace std;

class product
{
    int r1,r2,r3,r4;
    int q1,q2,q3,q4;

    int bl;

    public:
    
    product()
    {
        r1=100;
        r2=200;
        r3=300;
        r4=400;

        
    }
    
    void quantity()
    {
        cout<<"Enter qunatity of moneco: "<<endl;
        cin>>q1;
        
        cout<<"Enter qunatity of mango: "<<endl;
        cin>>q2;

        cout<<"Enter qunatity of banana: "<<endl;
        cin>>q3;

        cout<<"Enter qunatity of kiwi: "<<endl;
        cin>>q4;

    }

    float bill()
    {
        bl=r1*q1+r2*q2+r3*q3+r4*q4;
        cout<<"Bill generated on the basis of rate and quantity"<<endl;
        cout<<"Ammount= "<<bl<<endl;
    }

};

int main()
{
    product b;
    b.quantity();
    b.bill();


    return 0;
}