#include<stdio.h>
#include<iostream>

using namespace std;

int global=10;

void glob(int x){
	global=	global+12;
	cout<<global<<endl;
	cout<<x<<endl;
	x=x+11;
	cout<<x<<endl;
	
}
int main(){
	glob(12);
	cout<<global;
//	cout<<x<<endl;--> Not able to fetch
	
	
}
