#include<iostream>
using namespace std;
 
class rohit
{
    protected:
     int a;
    rohit(int l)
    {
        a=l;
    }
};
class Gosavi:public rohit
{
    int b;
    public:
   Gosavi(int l,int m):rohit(l)
   {
    b=m;
   }
   void add()
   {
    int c;
  c=a+b;
  cout<<"addtion of"<<a<<"and"<<b<<"is"<<c;
   }
};

int main()
{
Gosavi o(10,20);
o.add();
    return 0;
}