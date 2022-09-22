/* 01
   02
   03

   10
   11
   12

   20
   21
   22
*/

/*
   01 02 03
   10 11 12
   20 21 22
*/
#include<iostream>
using namespace std;
int main()
{
    int i;
    int j;
    i=0;
    j=0;
    while(i<=2)
    {
        j=0;
        while(j<=2)
        {
            cout<<i<<j<<endl;
            j++;
        }
        
        cout<<endl;
        i++;
    }
    
    return 0;
}