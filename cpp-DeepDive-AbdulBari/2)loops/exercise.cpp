#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int n,r;
	int n1=0;
	cin>>n;
	int num=n;
	while(n>0){
		r=n%10;
		n=n/10;
		n1=n1*10+r;
	}
	cout<<n1<<endl;
	cout<<r<<endl;
	if(num==n1)
	{
	cout<<"palidrome";
	}
	return 0;
	
}
