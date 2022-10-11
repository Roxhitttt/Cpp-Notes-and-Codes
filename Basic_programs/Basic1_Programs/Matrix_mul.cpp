#include<iostream>
using namespace std;

int main()
{
    int i,j,k;
    int a[3][3];
    int b[3][3];
    int m[3][3];
   int r=3;
   int c=3;
    cout<<"Enter element of a"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           
            cin>>a[i][j];
        }
    }

 cout<<"Enter elementms";
   for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Enter element of b";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            
            cin>>b[i][j];
        }
    }
cout<<"Enter element ";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }
    
 for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            m[i][j]=0;

            for(k=0;k<c;k++)
            {
                m[i][j]+=a[i][k]*b[k][j];
            }

        }
    
    }
 cout<<"addtion is"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<m[i][j]<<"\t";
        }
    cout<<endl;
    }
    return 0;
}