#include<stdio.h>
#include<iostream>
using namespace std;

class A{
	public:
		void f1(){
			
		}
		void f2(int x){
			
		}
		
};
class B:public A{
	public:
		void f1(){    } //function overriding
		void f2(){
			
		}
};
int main()
{
	B ojb;
	obj.f1();//f1 obj B is called
	obj.f2(21)//gives error as obj is of B and trying to call f2 of A 
	obj.f2()//f2  of class B 
}
