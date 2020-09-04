#include<iostream>
#include<conio.h>
using namespace std;
int sum(int,int); //global function can be called from anywhere
int main()
{
	int a=9,b=5;//a and b are actual arguments
	int s=sum(a,b);
	cout<<"sum is : "<<s;
	
}

int sum(int x,int y)//x and y are formal arguments
{
	return(x+y);
}

