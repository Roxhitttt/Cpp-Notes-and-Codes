#include<iostream>
using namespace std;

class student
{
    int id;
    char name[30];
    char sclass[10];

    public:

    void accept()
    {
        cout<<"Enter class: ";
        cin>>sclass;
        cout<<"Enter student id: ";
        cin>>id;
        cout<<"Enter name: ";
        cin>>name;
    }

    void display()
    {
        cout<<"\nStudent information System"<<endl;
        cout<<"Id: \t"<<id<<endl;
        cout<<"Name: \t"<<name<<endl;
        cout<<"sclass: \t"<<sclass<<endl;

    }
    
};

int main()
{
    student s[3];

    for(int i=0;i<3;i++)
    {
        s[i].accept();
    }
    
    for(int i=0;i<3;i++)
    {
        s[i].display();
    }

    return 0;
}