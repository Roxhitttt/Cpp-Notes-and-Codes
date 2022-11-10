#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream f;
    char s[10];
    f.open("d:\\demo.txt",ios::out);
    int x;
    x=f.tellp();
    cout<<x;
    cout<<"\n";
    f.seekp(5,ios::cur);
    x=f.tellp();
    cout<<x;
    cout<<"\n";
    cout<<"Enter Name";
    cin.getline(s,10);
    f<<s;
    x=f.tellg();
    cout<<x;
    f.seekp(100,ios::cur);
    cout<<"Enter Name";
    cin.getline(s,10);
    f<<s;
    x=f.tellg();
    cout<<x;
    
    f.close();

    return 0;
}