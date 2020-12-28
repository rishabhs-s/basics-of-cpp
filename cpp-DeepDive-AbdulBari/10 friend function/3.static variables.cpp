#include<iostream>
using namespace std;


class Test{
	public:
	static int x;
	Test(){
		int a=10;
		x++;
	}
	static int getCount()
{
return x;
}
};
int Test::x=0;
int main(){
	Test t,t1;
cout<<Test::getCount()<<endl;
cout<<t1.getCount()<<endl;
		
}
