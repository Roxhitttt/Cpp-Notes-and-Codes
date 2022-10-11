#include <iostream>
using namespace std;

class time
{
    int hr;
    int min;
    int sec;

    public:

    time(int a, int b, int c)
    {
        hr=a;
        min=b;
        sec=c;
    }

    time(time &o)
    {
        hr=o.hr;
        min=o.min;
        sec=o.sec;
    }

    void display()
    {
        cout<<hr<<":"<<min<<":"<<sec<<endl;
    }
    void add(time l)
    {
        hr=hr+l.hr;
        min=min+l.min;
        sec=sec+l.sec;
        if(sec>59)
        {
            min=min+1;
            sec=sec-60;
        }
        if(min>59)
        {
            hr=hr+1;
            min=min-60;
        }
        if(hr>12)
        {
            hr=hr-12;
        }
    }
};

int main()
{
    int h,m,s;
    cout<<"Enter first time"<<endl;
    cout<<"Enter Hour"<<endl;
    cin>>h;
    cout<<"Enter Minutes"<<endl;
    cin>>m;
    cout<<"Enter Seconds"<<endl;
    cin>>s;
    
    time t1(h,m,s);

    cout<<"Enter Second time"<<endl;
    cout<<"Enter Hour"<<endl;
    cin>>h;
    cout<<"Enter Minutes"<<endl;
    cin>>m;
    cout<<"Enter Seconds"<<endl;
    cin>>s;
    
    time t2(h,m,s);
    t1.display();
    t2.display();
    t2.add(t1);
    t2.display();

    return 0;
}