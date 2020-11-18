#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int arr[2][3]={{2,4,6},{23,231,234}};
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
	{
		cout<<arr[i][j]<<" ";
	}
		cout<<endl;
	}
	
}
