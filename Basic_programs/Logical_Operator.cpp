#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int b=20;
    int c=30;
    int d=40;
    bool r;
    
    r=(a>b)&&(c>d);
    cout<<"and first condition "<<r<<endl;
    
    r=(a<b)&&(c>d);
    cout<<"and second condition "<<r<<endl;
    
    r=(a>b)&&(c<d);
    cout<<"and third condition "<<r<<endl;
    
    r=(a<b)&&(c<d);
    cout<<"and fourth condition "<<r<<endl;

    r=(a>b)||(c>d);
    cout<<"Or first condition "<<r<<endl;
   
    r=(a<b)||(c>d);
    cout<<"Or second condition "<<r<<endl;
   
    r=(a>b)||(c<d);
    cout<<"Or third condition "<<r<<endl;
   
    r=(a<b)||(c<d);
    cout<<"Or fourth condition "<<r<<endl;
    
    r=!((a<b)||(c<d));
    cout<<"not condition "<<r<<endl;

    return 0;

}