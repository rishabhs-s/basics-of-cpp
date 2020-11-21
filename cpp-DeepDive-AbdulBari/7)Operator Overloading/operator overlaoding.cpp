#include<iostream>
#include<stdio.h>

using namespace std;


class complex{
	public:
	int img;
	int real;

	complex(int r=0,int i=0){
		real=r;
		img=i;
	}
	complex operator+(complex x) 
	{
		complex temp;
		temp.real=real+x.real;
		temp.img=img+x.img;
		return temp;
	}
};

int main(){
	complex c1,c2,c3;
	c1.real=3;c1.img=23;
	c2.real=3;c2.img=23;
	c3=c1+c2;
	cout<<c3.real<<" + "<<c3.img<<"i";
}
