#include <iostream>
using namespace std;
int main()
{
    int b,c,a;
    int i;

    do{
        cout<<"1 for addition"<<endl<<"2 for multiplication"<<endl<<"3 for substraction"<<endl<<"4 for Division"<<endl<<"5 for exit"<<endl;
        cout<<"Enter operation you wanna perform"<<endl;
        cin>>i;
        switch(i)
        {
            case 1:
            cout<<"Enter 1st number";
            cin>>b;
            cout<<"Enter 2nd number";
            cin>>c;
            a=(b+c);
            cout<<"Answer is "<<a<<endl;
            break;

            case 2:
            cout<<"Enter 1st number";
            cin>>b;
            cout<<"Enter 2nd number";
            cin>>c;
            a=(b*c);
            cout<<"Answer is "<<a<<endl;
            break;

            case 3:
            cout<<"Enter 1st number";
            cin>>b;
            cout<<"Enter 2nd number";
            cin>>c;
            a=(b-c);
            cout<<"Answer is "<<a<<endl;
            break;

            case 4:
            cout<<"Enter 1st number";
            cin>>b;
            cout<<"Enter 2nd number";
            cin>>c;
            a=(b/c);
            cout<<"Answer is "<<a<<endl;
            break;

        }

    }while(i!=5);
    
    return 0;
}