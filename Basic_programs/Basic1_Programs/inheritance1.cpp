#include<iostream>
using namespace std;

class square 
{
    
    public:
    int length;

    void acceptA()
    {
        cout<<"Enter length:"<<endl;
        cin>>length;
    }

    void displayA()
    {
        cout<<"Length: "<<length<<endl;
        cout<<"Area of Square: "<<length*length<<endl;
    }
};
class rectangle:public square
{
    int breadth;

    public:

    void acceptB()
    {
        cout<<"Enter breadth:"<<endl;
        cin>>breadth;
    }
    void displayB()
    {
        cout<<"Breadth: "<<breadth<<endl;
        cout<<"Area of rectangle: "<<length*breadth<<endl;
    }

};


int main()
{

    rectangle o;
    o.acceptA();
    o.acceptB();
    o.displayA();
    o.displayB();

    return 0;
}