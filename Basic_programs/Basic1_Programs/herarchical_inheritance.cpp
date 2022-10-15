#include<iostream>
using namespace std;
class lenght
{
     public:
    int h;
    void getheight()
    {
        cout<<"Enter height";
        cin>>h;
    }
};
class tringle:protected lenght
{
    int b;
    public:
    void getbase()
    {
         getheight();
        cout<<"Enter base";
        cin>>b;
    }
    void areatringle()
    {
        int a;
        a=(1/2)*b*h;
        cout<<"Area OF Trangle is"<<a<<endl;
    }

};
class paralogram:protected lenght 
{
    int b;
    public:
    void getbase()
    {getheight();
        cout<<"Enter base";
        cin>>b;
    }
    void areaoppragram()
    {
        int a;
        a=b*h;
        cout<<"Area OF Trangle is"<<a<<endl;
    }

};
class cylinder:public lenght
{
    int r;
    public:
    void getbase()
    {
        getheight();
        cout<<"Enter radius";
        cin>>r;
    }
    void areacyliender()
    {
        int a;
        a=2*(3.14)*r*h;
        cout<<"Area OF cylender is"<<a<<endl;
    }

};

int main()
{
    tringle o;
    o.getbase();
    o.areatringle();
paralogram o2;
o2.getbase();
o2.areaoppragram();
cylinder o3;
o3.getbase();
o3.areacyliender();



    return 0;
}