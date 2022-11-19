#include<iostream>
using namespace std;
int main()
{
    cout<<"Output of __LINE__ : "<< __LINE__ << endl;
    cout<<"Output of __FILE__ : "<< __FILE__ <<endl;
    cout<<"Output of __DATE__ : "<< __DATE__ <<endl;
    cout<<"Output of __TIME__ : "<< __TIME__ <<endl;
    // __STDC__
    // __ASSEMBLER__
    // __OBJC__

    return 0;
}