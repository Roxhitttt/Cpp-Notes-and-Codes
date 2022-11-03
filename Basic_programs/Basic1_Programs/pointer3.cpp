#include<iostream>
using namespace std;
class box
{
    public:
    int l;
    int w;
    int h;

    box()
    {

    }
    box(int len,int wid,int heg)
    {
        l=len;
        w=wid;
        h=heg;
    }
    void display()
    {
        cout<<"h= "<<h<<endl;
        cout<<"l= "<<l<<endl;
        cout<<"w= "<<w<<endl;
    }
    void volume()
    {
        int v;
        v=l*h*w;
        cout<<"volume of box is "<<v<<endl;

    }
};

int main()
{
    box o(3,4,5);
    box *p;
    p=&o;
    p->display();
    p->volume();
    box o1;
    box *q;
    q=&o1;
    q->l=33;
    q->h=55;
    q->w=77;
    q->display();
    q->volume();

    return 0;
}