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
	rect r;
rect*p=&r;
	p->l=10;
	p->b=1001;
cout<<p->area()<<endl;
}
