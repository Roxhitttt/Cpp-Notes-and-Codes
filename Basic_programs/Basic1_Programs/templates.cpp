#include<iostream>
#include<fstream>
using namespace std;
template <class T>
inline T add(T a,T b)
{
    return (a+b);
}

int main()
{
    cout<<add(5,6)<<endl;
    cout<<add(5.5,6.6)<<endl;

    return 0;
}
