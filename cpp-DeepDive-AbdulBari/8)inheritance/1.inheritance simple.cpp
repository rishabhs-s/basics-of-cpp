#include<iostream>
using namespace std;


class rect{
	public:
	int l;
	int b;
	void show(){
		cout<<l<<endl;
		cout<<b<<endl;
	}
};
class cuboid:public rect{
	public:
	int h;
	void show(){
		cout<<l<<endl<<b<<endl<<h;
	}
	
	
};
int main(){
	rect r;
	cuboid c;
	c.l=10;
	c.b=20;
	c.h=12;
//	r.show();
	c.show();
}
