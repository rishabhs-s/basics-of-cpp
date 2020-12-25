#include<iostream>
using namespace std;

class parent{
	public:
	parent(){
		cout<<"parent's default constructor"<<endl;
	}
	parent(int x){
		cout<<"parent's parametrized constructor"<<endl;
	}
};
class base:public parent{
	public:
		base(){
		cout<<"base's default constructor"<<endl;
	}
	base(int x){
		cout<<"base's parametrized constructor"<<endl;
	}
	
};
int main()
{
	base b;
	base b1(10);
}
