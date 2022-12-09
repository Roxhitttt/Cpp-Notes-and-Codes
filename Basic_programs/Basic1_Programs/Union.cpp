#include<iostream>
using namespace std;
union student 
{
    int id;
    float name;
    char address[20];
};
int main()
{
    student o;
    cout<<"Enter id: ";
    cin>>o.id;
    cout<<"Enter name: ";
    cin>>o.name;
    cout<<"Enter address: ";
    cin>>o.address;
    cout<<"Student information:"<<endl;
    cout<<"id: "<<o.id<<endl;
    cout<<"name: "<<o.name<<endl;
    cout<<"address: "<<o.address<<endl;

    return 0;
}