#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
class complex{
	private:
		int a,b;
	public:
		void setdata(int x,int y)
		{
			a=x;
			b=y;	
		}
		void show()
		{
			cout<<a<<"\n"<<b;
		}
};
int main()
{
	complex c1;
	c1.setdata(12,44);
	c1.show();
}
