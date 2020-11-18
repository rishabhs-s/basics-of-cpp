#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int sum=0;
	int arr[6]={1,32,43,11,322,121};
	for(int i=0;i<6;i++){  //using for loop
		sum=sum+arr[i];
	}
cout<<sum<<endl;

int sum1=0;
	for(int i:arr){  //using for each loop
		sum1=sum1+i;
	}
cout<<sum1;
}
