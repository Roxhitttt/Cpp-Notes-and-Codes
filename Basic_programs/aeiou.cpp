#include <iostream>
using namespace std;
int main()
{
    char k;
    cout<<"Enter the value of character: ";
    cin>>k;

    if(k=='a' || k=='e' || k=='i' || k=='o' || k=='u' )
    {
        cout<<"Given character is a vowel";
    }
    if(!(k=='a' || k=='e' || k=='i' || k=='o' || k=='u' ))
    {
        cout<<"Given character is not a vowel";
    }
    
    return 0;
}