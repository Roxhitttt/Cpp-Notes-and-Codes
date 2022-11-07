#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    char info[30];
    char age[5];
    char add[30];
    ofstream of;
    of.open("demo.txt");
    cout<<"Now we are going to write into file"<<endl;
    cout<<"Enter your name";
    cin.getline(info,30);
    of<<info<<endl;
    cout<<"Enter your age";
    cin.getline(age,5);
    of<<age<<endl;
    cout<<"Enter your address";
    cin.getline(add,30);
    of<<add<<endl;

    of.close();

    return 0;

}