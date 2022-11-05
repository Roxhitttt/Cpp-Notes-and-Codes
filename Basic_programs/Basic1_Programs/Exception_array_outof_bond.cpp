#include<iostream>
using namespace std;
int main()
{
    int a[]={10,20,30,40,50};
    try
    {
        for(int i=0;i<6;i++)
        {
            if(i>4)
            {
                throw 0;
            }
            else 
            {
                cout<<a[i]<<endl;
            }
        }
    }
    catch(int e)
    {
        cout<<"Array index out of bound";
    }
    return 0;
}