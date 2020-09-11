#include<stdio.h>
#include<iostream>
using namespace std;

class A{
	public:
		void fun(){
			
		};
class B:public A(){
	void fun(){
		
	}
	void fun2(){
		
	}
	
};
int main(){
	A *p,obj1;//object of A
	B obj2;
	p=&obj2;
	p->fun()//if we donot make class A virtual then the ptr will point to class A function but virtual function allow late binding and hence the child class object is called
}
