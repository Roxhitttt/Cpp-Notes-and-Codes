#include<iostream>
using namespace std;
int main()
{
    int k=0;

    for(int i=20;i<=30;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
            k=k+i;
        }
        
    }
    cout<<k;
    return 0;
}