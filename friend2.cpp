//friend function can be in more than one class and
#include<iostream>
using namespace std;

class B;//forward declaration
class A{
	private:
		int a;
		public:
			void setdata(int x)
			{
				a=x;
			}
			friend void fun(A,B);
};

class B{
	private:
		int b;
		public:
			void setdata(int y)
			{
				b=y;
			}
			friend void fun(A,B);
};

void fun(A obj1,B obj2)
{
	cout<<obj1.a+obj2.b;
}

int main()
{
	A obj1;
	B obj2;
	obj1.setdata(334);
	obj2.setdata(231);
	fun(obj1,obj2);
}
