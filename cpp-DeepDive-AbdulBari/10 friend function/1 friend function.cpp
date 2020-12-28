#include<iostream>
using namespace std;

class a{
	public:
		int x;
	protected:
		int y;
	private:
		int z;
	friend void fun();
};
void fun(){
a obj;
obj.x=12;
obj.y=1221;
obj.z=121;
cout<<obj.x<<endl<<obj.y<<endl<<obj.z;
}
int main(){
	fun();
}
