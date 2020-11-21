#include<iostream>
#include<stdio.h>

using namespace std;


class Complex{
	public:
	int img;
	int real;
	
	Complex( int r=0,int i=0){
		real=r;
		img=i;
	}
	friend Complex operator+(Complex c1,Complex c2);
};
Complex operator+ (Complex c1,Complex c2){
	Complex temp;
	temp.real=c1.real+c2.real;
	temp.img=c1.img+c2.img;
	return temp;
}
int main(){
	Complex c1(10,21);
	Complex c2(10,21);
	Complex c3;
	c3=c2+c1;
	cout<<c3.real<<" + "<<c3.img<<"i";

}

