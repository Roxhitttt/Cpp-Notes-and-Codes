#define MyModel25
#define Myversoin 2.3
#include<iostream>
using namespace std;
int main()
{
    #ifdef Mymodel25
    cout<<"\nMy Model 25 is define";
    #else 
    cout<<"\nMy Model is not define";
    #endif

    #ifdef Myversion
    cout<<"\nMy version is define";
    #else 
    cout<<"\nMy version is not define";
    #endif

    #undef Myversion
    #ifdef Myversion
    cout<<"\nMy version is define";
    #else 
    cout<<"\nMy version is not define";
    #endif

    return 0;
}