#include<iostream>
using namespace std;
template <class T1,class T2>
class myval
{
    T1 a;
    T2 b;
    public:
        myval(T1 first,T2 second)
        {
            a=first;
            b=second;
        }
        void getmaxval()
        {
            cout<<a<<endl;
            cout<<b<<endl;
        }
};

int main()
{
    myval<int,float> o(5,7.9);
    o.getmaxval();
    myval<float,int> o1(8.8,9);
    o1.getmaxval();

    return 0;
}