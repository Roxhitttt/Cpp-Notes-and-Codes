#include<iostream>
#include<fstream>
using namespace std;
int main()
{
     char read[500];
     ifstream ifs;
     ifs.open("demo.txt");
     cout<<"Reading contains from file"<<endl;
     ifs>>read;
     cout<<"name "<<read<<endl;
     ifs>>read;
     cout<<"age "<<read<<endl;
     ifs>>read;
     cout<<"addreass "<<read<<endl;
     ifs>>read;
     ifs.close();

     return 0;


}