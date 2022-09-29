#include<iostream>
using namespace std;
int main()
{
    void show();   // Function Declaration.

    cout<<"\n I am going to call function";

    show();        // Function Calling.

    cout<<" \n I am after calling ";

}

void show()         // Function Defination.
    {
        cout<<"\n Ok I am show Function";
    }