#include<iostream>
using namespace std;

class result
{
    int phy,maths,chem,bio,it;

    public:

    void get()
    {
        cout<<"Enter marks in physics: "<<endl;
        cin>>phy;
        cout<<"Enter marks in maths: "<<endl;
        cin>>maths;
        cout<<"Enter marks in chem: "<<endl;
        cin>>chem;
        cout<<"Enter marks in bio: "<<endl;
        cin>>bio;
        cout<<"Enter marks in IT: "<<endl;
        cin>>it;
    }

    int display()
    {
        int per;
        int c;
        c=0;
        if(phy<35)
        {
            c=c+1;
        }
        if(maths<35)
        {
            c=c+1;
        }
        if(chem<35)
        {
            c=c+1;
        }
        if(bio<35)
        {
            c=c+1;
        }
        if(it<35)
        {
            c=c+1;
        }
        if(c>2)
        {
            cout<<"Fail"<<endl;
        }
        if(c>=1&&c<=2)
        {
            cout<<"Pass with ATKT "<<endl;
        }
        if(c==0)
        {
            cout<<"Pass"<<endl;
            per=(phy+maths+chem+bio+it)*100/500;
            cout<<"Your percentage is: "<<per<<endl;
        }

        cout<<"Your class is: "<<endl;
        if(per>=85)
        {
            cout<<"First class with distinction "<<endl;
        }
        if(per>=75&&per<=85)
        {
            cout<<"First Class "<<endl;
        }
        if(per>=35&&per<=75)
        {
            cout<<"Pass"<<endl;
        }
        if(per=0)
        {
            cout<<"Fail"<<endl;
        }
    }
};

int main()
{
    result r;
    r.get();
    r.display();
    return 0;
}