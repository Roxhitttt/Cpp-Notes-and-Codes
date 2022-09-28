#include<iostream>
using namespace std;
int main()
{
    int i,j,c;
    c=5;

    for(i=0;i<=5;i++)
    {
        for(j=0;j<=5;j++)
        {
            if(c>=j)
            {
                cout<<" ";
            }
            else
            {
                cout<<j;
            }
        }
        cout<<endl;
    c--;
    }
    


    return 0;
}