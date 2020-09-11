#include<iostream>
using namespace std;

class box{
	private:
		int l, b, h;
	public:
		void setdim(int x,int y, int z)
		{
			l=x;
			b=y;
			h=z;
			
		}
		void show(){
			cout<<l<<"\n"<<b<<"\n"<<h;
		}
};

int main(){
	box *p,smallbox;//* stores ptr
	p=&smallbox;// stores address
	p->setdim(10,7,8);//in case of ptr we use -> instead of dot operator
	p->show();
}
