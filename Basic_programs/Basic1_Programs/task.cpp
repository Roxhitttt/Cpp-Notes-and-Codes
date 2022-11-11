#include<iostream>
using namespace std;

inline int add(int a,int b)
{
    return(a+b);
}
inline float add(float a)
{
    return(a+a);
}
int main()
{
    cout<<add(10,20);
    cout<<"\n";
    cout<<add(55.55,55.55);
    
    return 0;
}
