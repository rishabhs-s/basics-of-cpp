#include<iostream>
using namespace std;

class b;
class a{
	private:
		int x;
	friend b;
	
};
class b{
	public:
	a obj;
	void fun(){
		obj.x=12;
		cout<<obj.x;
	}
};

int main(){
	b obje;
	obje.fun();
}
