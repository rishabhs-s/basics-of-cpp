#include<iostream>
#include<stdio.h>

using namespace std;
void swap(int a,int b)
	{
		int temp;
		temp=a;
		a=b;
		b=temp;
	}
int main(){
	int x=21;
	int y=12;
	swap(x,y);
	cout<<x<<" "<<y;
	// no swap happens as in call by value formal parameters are not changed
	
	
	
	
}
