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
		complex operator- ()
		{
			complex temp;
			temp.a=-a;
			temp.b=-b;
			return(temp);
		}
};
int main()
{
	complex c1,c2;
	c1.setdata(2,4);
	c2=-c1;
	c2.show();
}

