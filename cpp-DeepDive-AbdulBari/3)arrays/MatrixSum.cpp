#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int a[2][3]={{1,4,2},{2,5,5}};
	int b[2][3]={{8,3,5},{5,6,8}};
	int c[2][3];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
	{
		cout<<c[i][j]<<" ";
	}
		cout<<endl;
	}
}
