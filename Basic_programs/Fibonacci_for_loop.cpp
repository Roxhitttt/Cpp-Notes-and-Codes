#include<iostream>
using namespace std;
int main()
{
    int f,l,n;
    f=0;
    l=1;
    cout<<f<<endl;
    cout<<l<<endl;
    cout<<"\n";

    for(int i=1;i<=10;i++)
    {
        n=f+l;
        cout<<n<<endl;
        f=l;
        l=n;
    }
    return 0;
}