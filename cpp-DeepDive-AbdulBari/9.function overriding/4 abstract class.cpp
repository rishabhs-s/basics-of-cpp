//abstract classes- classes with pure virtual functions,cannot be instantiated

#include <iostream>
using namespace std;

class car{//abstract class
	public:
		virtual void fun(){
			cout<<"car class(parent)";
		}
		virtual void fun1()=0;//pure virtual function
		
};
class innova :public car{
	public:
			void fun1(){
			cout<<"innova class fun1";
		}
};

int main(){
	car *c=new innova();
	c->fun();
	c->fun1();
}
