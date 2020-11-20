#include<iostream>
using namespace std;


class rect{
	public:
	int l;
	int b;

	int area(){
		return l*b;
	}
	
	
};

int main(){
	rect r,r1;
	r.l=10;
	r.b=100;
cout<<r.area()<<endl;
r1.l=120;
	r1.b=1100;
cout<<r1.area()<<endl;
}
