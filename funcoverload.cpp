#include<conio.h>
#include<iostream>
using namespace std;
int area(int ,int);
float area(int);
int main()
{
	
	cout<<"enter the length and breadth of rectangle";
	int l,b;
	cin>>l>>b;
	int rect=area(l,b);
	cout<<"area of rectangle is"<<rect<<endl;
	cout<<"enter the radius of circle";
	int r;
	cin>>r;
	float circle=area(r);
	cout<<"area of circle is"<<circle;
	
}
float area(int R)
{
	return (3.14*R*R);
}
int area(int x,int y){
	return(x*y);
}

