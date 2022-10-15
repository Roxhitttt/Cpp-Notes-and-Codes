#include<iostream>
using namespace std;

class student
{
    int roll;
    char name[30];
    public:
    void getstud()
    {
        cout<<"Enter roll no"<<endl;
        cin>>roll;
        cout<<"enter name";
        cin>>name;
    }
    void showstdent()
    {
        cout<<"Roll no"<<roll<<endl;;
        cout<<"Name"<<name<<endl;
    }
};
class marks:public student
{
    public:
    int s1,s2,s3;
    void getmarks()
    {
cout<<"Ennter java marks";
cin>>s1;
cout<<"Enter c marks";
cin>>s2;
cout<<"Enter cpp marks";
cin>>s3;
    }

};
class sport
{
    int sp;
    public:
    int gersp(bool p)
    {
        if(p==true)
        {
           sp=5;
        }
        else
        {
            sp=0;
        }
      return sp;
    }
};
class result:public marks,public sport 
{public:
    bool st;
    int total,per,sp;
    void getresult()
    {
           getstud();
           getmarks();    
           cout<<"Do you play in sport";
           cin>>st;

    }
    void showresult()
    {
        showstdent();
        sp=gersp(st);
        total=s1+s2+s3+sp;
        per=(total)*100/300;
        cout<<"Java "<<s1<<endl;
        cout<<"c "<<s2<<endl;
        cout<<"cpp "<<s3<<endl;
        cout<<"Total "<<total<<endl;
        cout<<"percentage "<<per<<endl;


    }
};
int main()
{
    result o;
    o.getresult();
    o.showresult();
    return 0;
    
}