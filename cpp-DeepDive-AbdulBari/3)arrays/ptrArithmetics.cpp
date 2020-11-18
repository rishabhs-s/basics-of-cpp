#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
	int x[5]{12,121,21,11,22};
	int *p=x;
	

	cout<<p<<endl;//adress of first value of arr
	cout<<&p<<endl;//adress of p
	cout<<p<<endl;//adress of first value of arr
	cout<<p++<<endl;//adress of first value of arr but ptr moves to next
	cout<<p<<endl;//adress of second value of arr
	cout<<*p<<endl;//value at which integer is pointing//derefrencing
}
