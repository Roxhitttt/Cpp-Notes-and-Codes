#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch[30];   
    fstream f;
    f.open("d:\\Demo1.txt",ios::app);
    cout<<"Enter your name: ";
    cin.getline(ch,30);
    f<<ch<<"\n";

    cout<<"Enter your age: ";
    cin.getline(ch,30);
    f<<ch<<"\n";

    cout<<"Enter your add: ";  

    f.close();

    return 0;
}