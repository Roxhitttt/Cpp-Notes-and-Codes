#include<iostream>
using namespace std;
#include<exception>

class withdrwal:public exception
{
    public:
    const char *what() const throw()
    {
        return "bank limit out range allow upto 10000";
    }
};
class deposit:public exception
{
    public:
    const char *what() const throw()
    {
        return "bank limit out range allow upto 25000";
    }
};
int main()
{
    try
    {
    int amt=500;
    int  ch;
    int a;
    do
    {
        cout<<"\n1.Deposit \n2.Withrawal \n3.balance \n4.exit";
        cout<<"Enter your choice";
        cin>>ch;
        switch (ch)
        {
            case 1:cout<<"Enter amount";
            cin>>a;
            if(a>25000)
            {
                deposit d;
                throw d;
            }
            else
            {
                amt=amt+a;
            }
            break;
            
            case 2:cout<<"Enter amount";
            cin>>a;
            if(a>10000)
            {
                withdrwal d;
                throw d;
            }
            else
            {
                amt=amt-a;
            }
            break;
            case 3:cout<<amt<<endl;
            break; 
        }           
        }while(ch!=4);
    }catch(exception& eo)
        {
            cout<<eo.what();
        }
    
    return 0;

}