#include<iostream>
#include<stdio.h>

using namespace std;
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	int x=19;
	int y=20;
	cout<<x<<" "<<y<<endl;;
	swap(&x,&y);
	cout<<x<<" "<<y;
}
