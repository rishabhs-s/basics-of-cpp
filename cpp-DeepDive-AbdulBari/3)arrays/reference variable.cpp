#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
	int x=10;
	int &p=x;//reference variable
	cout<<&p<<endl;//prints address of x;
	cout<<&x<<endl;//prints address of x;
	cout<<x<<endl;//prints 10 
	cout<<p<<endl;//prints 10 as p is refernece to x
	p++;
	cout<<x<<endl;//11 as the reference also points to same x
	
}
