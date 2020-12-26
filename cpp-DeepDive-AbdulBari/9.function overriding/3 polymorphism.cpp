#include <iostream>
using namespace std;

class car{
	public:
		virtual void fun()=0;//pure virtual function
		virtual void fun1()=0;//pure virtual function
		
};
class innova :public car{
	public:
		void fun(){
			cout<<"innova class";
		}
			void fun1(){
			cout<<"innova class fun1";
		}
};
class maruti :public car{
	public:
		void fun(){
			cout<<"maruti class";
		}
		void fun1(){
			cout<<"maruti class fun1";
		}
};
int main(){
	car *c=new innova();
	c->fun();
	c->fun1();
c=new maruti();
	c->fun();
	c->fun1();
}
