#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	while(n!=m){
		if(n>m){
			n=n-m;
		}
		else if(n<m)
		{
			m=m-n;
		}
	}
	cout<<n;
}
