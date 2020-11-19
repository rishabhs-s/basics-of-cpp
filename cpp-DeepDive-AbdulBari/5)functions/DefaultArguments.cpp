#include<iostream>
#include<stdio.h>

using namespace std;
int func(int a=0,int b=0,int c=0)
	{
		return a+b+c;
	}
int main(){
	int z=func(21,211,21);
	cout<<z<<endl;
	int q=func(21,211);
	cout<<q<<endl;
	
	
	
}
