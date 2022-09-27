/*

* 
* *
* * *
* * * *
* * * * *

*/

#include <iostream>
using namespace std;
int main()
{
    int i,j;
    i=0;
    j=0;
    while(i<=4)
    {
        j=0;
        while(j<=i)
        {
            cout<<"*"<<" ";
            j=j+1;
        }
        i=i+1;
        cout<<"\n";
    }
    return 0;
}