#include<iostream>
using namespace std;
template <class T>
class myval
{
    T a;
    T b;
    public:
        myval(T first,T second)
        {
            a=first;
            b=second;
        }
        T getmaxval()
        {
            T r;
            r=(a>b?a:b);
            return r;
        }
};

int main()
{
    myval<int> o(5,7);
    cout<<"Greater is "<<o.getmaxval()<<endl;
    myval<float> o1(8.8,8.9);
    cout<<"Greater is "<<o1.getmaxval()<<endl;

    return 0;
}