

#include<iostream>
using namespace std;

namespace Name
{
    class intro
    {
    public:
    void display()
        {
        cout<<"Rohit"<<endl;
        }
    };
}
namespace Surname
{
    class intro
    {
        public:
        void display()
        {
            cout<<"Gosavi"<<endl;
        }
    };
}
using namespace Name;
int main()
{
    intro o;
    o.display();
    
    Surname::intro r;
    r.display();


    return 0;
}