#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
	int x=10;
	int *p;
	p=&x;
	
	cout<<x<<endl; //10
	cout<<*p<<endl; //10
	cout<<p<<endl; //address of x
	cout<<&p<<endl; //address of p
	cout<<&x<<endl;//address of x
}
