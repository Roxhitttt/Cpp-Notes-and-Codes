#include<iostream>
using namespace std;
class number
{
    int x;
    int y;
    public:
   
    number(int a,int b)
    {
      x=a;
      y=b;
    }
    number(number &o)
    {
        x=o.x;
        y=o.y;
    }
    void display()
    {
      cout<<"x="<<x<<endl;
      cout<<"y="<<y<<endl;
    }
    int add()
    {

      return(x+y);
    }
};
int main()
{
   
    number v2(55,66);
    number v3(v2);
     v2.display();
     v3.display();
     int r=v2.add();
     cout<<"addtion is"<<r;

   return 0;
}