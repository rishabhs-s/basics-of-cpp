//virtual function need arises when there is a pointer of of one class and object of another class in function overriding
#include <iostream>
using namespace std;

class parent{
	public:
		virtual void fun(){ //if virtual keyword is removed then this function will run not the child class fun
			cout<<"parent class";
		}
};
class child:public parent{
	public:
		void fun(){
			cout<<"child class";
		}
};

int main(){
	parent *p=new child();
	p->fun();
	
	}
	
