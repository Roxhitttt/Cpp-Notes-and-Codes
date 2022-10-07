#include<iostream>
using namespace std;

class area
{
    int length;
    int breadth;
    public:
    int aor;

    area(int l,int b)
    {
        length=l;
        breadth=b; 
    }

    void display()
    {
        cout<<"Lenght is: "<<length<<endl;
        cout<<"Breadth is: "<<breadth<<endl;
        
    }
    void a_of_r()
    {
        aor=length*breadth;
        cout<<"Area of a rectangle is: "<<aor<<endl;
    }
    
};

int main()
{
    int a,b;
    
    cout<<"Enter the length and breadth of the rectangle: "<<endl;
    cin>>a>>b;
    
    area o(a,b);
    o.display();
    o.a_of_r();

    

    return 0;
}