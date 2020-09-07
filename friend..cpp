#include<iostream>
#include<stdio.h>
using namespace std;
class complex{
	private:
		int a,b;
	public:
		void setdata(int x,int y){
			a=x;
			b=y;
		}
		void showdata()
		{
			cout<<a<<"\n"<<b;
		}
		friend void fun(complex);//friend function declaration inside class
	
};
void fun(complex c)//friend function definition
{
	cout<<"\n"<<c.a+c.b;
}
int main()
{
	complex c1;
	c1.setdata(3,5);
	c1.showdata();
	fun(c1);

}

