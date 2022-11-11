#include<iostream>
using namespace std;
class student
{
    public:
    int id;
    char name[30];
    float per;
    void get()
    {
        cout<<"Enter id";
        cin>>id;
        cout<<"Enter name";
        cin>>name;
        cout<<"Enter percentage";
        cin>>per;
    }
    void show()
    {
        cout<<id<<endl;
        cout<<name<<endl;
        cout<<per<<endl;
    }
};

int main()
{
    student s;
    fstream o;
    s.get();
    o.open("student.txt",ios::out);
    s.get();
    o.write((char*)&s,sizeof(s));
    o.close();

    return 0;
}