#include<iostream>
using namespace std;
int main()
{
    int i,j,a=5;
    i=0;
    j=0;
    while(i<5)
    {
        while(j<a)
        {
            cout<<"*";
            j--;
        }
        cout<<endl;
        a--;
    }

    return 0;
}