#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char s[20];
    fstream f;
    f.open("d:\\telepicsdemo.txt",ios::out);
    cout<<"Enter your name";
    cin.getline(s,20);
    f<<s<<"\n";
    f.close();

    return 0;
}