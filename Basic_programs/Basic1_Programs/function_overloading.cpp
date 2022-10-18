#include<iostream>
using namespace std;

class demooverload
{
    int x;
    int y;
    public:
    demooverload(int l,int m)  // Contructor 
    {
        x=l;
        y=m;
    }
    void display()  // Function with no parameters
    {
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
    }
    void add(int k)
    {
        x=x+k;
        y=y+k;
    }
    void add(int l1, int l2)
    {
        x=x+l1;
        y=y+l2;
    }

};

int main()
{
    int l,m;
    cout<<"Enter l";
    cin>>l;
    cout<<"Enter m";
    cin>>m;
    demooverload o(l,m);
    o.display();
    o.add(10);
    o.display();
    o.add(8,9);
    o.display();
    
    return 0;
}