#include <iostream>
using namespace std;

class parent{
	public:
		void fun(){
			cout<<"parent class";
		}
};
class base:public parent{
	public:
		void fun(){
			cout<<"base class";
		}
};

int main(){
	base b;
	b.fun();
}
