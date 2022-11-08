#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char s[20];
    fstream f;
    f.open("d:\\telepicsdemo.txt",ios::in);

    while(f>>s)
    {
        cout<<s<<endl;
    }
    
    f.close();

    return 0;
}