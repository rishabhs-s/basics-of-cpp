#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x=5;
	int &y=x;
	cout<<y<<endl;//y is a reference variable hence this statement prints 5
	//y++ ----> not allowed as y is refernce variable
	x++;
	cout<<y;//prints 6 as x is incrented
	
}
