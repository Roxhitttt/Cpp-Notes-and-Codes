//surace ara of cone=3.14*r*l+3.14*r*r;

#include<iostream>
using namespace std;
class circle
{
    public:
    float r;
    public:
    void getr()
    {
        cout<<"Enter radius";
        cin>>r;
    }
    void areacircle()
    {
        float a;
        a=3.14*(r*r);
        cout<<"Area of circle"<<a<<endl;
    }
};
class Square
{   public:
    float l;

    void getlen()
    {
        cout<<"Enter lenght";
        cin>>l;
    }
    void areasqr()
    {
        float a;
        a=l*l;
        cout<<"Area of square"<<endl;

    }

};
class cone:public circle,public Square
{
 public:
 void surcasearea()
 {
    float a;
    a=(3.14*r*l)+(3.14*r*r);
    cout<<"Surface area of cone is"<<a<<endl;
 } 
};
int main()
{
    cone o;
    o.getr();
    o.getlen();
    o.surcasearea();
    return 0;

}