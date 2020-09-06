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
		complex add(complex c)
		{
			complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return(temp);
			
		}
};
int main()
{
	complex c1,c2,c3;
	c1.setdata(12,44);
	c2.setdata(12,44);
	c3=c1.add(c2);
	c3.show();
}

