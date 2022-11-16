#include<iostream>
using namespace std;
template <class T>
inline T gat(T a,T b)
{
    return(a>b?a:b);
}
int main()
{
    cout<<gat(5,7)<<endl;
    cout<<gat(8.7,7.5)<<endl;
    cout<<gat('a','k')<<endl;

    return 0;
}