#include<iostream>
using namespace std;
int main()
{
	int a=8;
	int b=7;
	int r;
	
	r=a&b;
	cout<<"\n& and reslut "<<r;
	
	r=a|b;
	cout<<"\n|  or reslut "<<r;
	
	r=a^b;
	/*
	a=8  1000
	b=7  0111
	a^b  1111  ------- 15   */

	cout<<"\n^ Exor result "<<r;
	
	r=~b;
	cout<<"\n~ negation reslut "<<r;
	
	r=a>>2;
	cout<<"\n>> right shift reslut "<<r;
	
	r=a<<2;
	cout<<"\n<< left shift eslut "<<r;

	return 0;
}
