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
rect*p=new rect;
	p->l=10;
	p->b=1021;
cout<<p->area()<<endl;
}
