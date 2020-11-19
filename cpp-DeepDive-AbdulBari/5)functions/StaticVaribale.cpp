//static variables are defined inside functions and remain in memeory till program is runninga --just like global variabels but cannot be called from anywhere
#include<iostream>
using namespace std;

void fun(){
	static int x=10;
	x++;

	int a=11;//only remains till function is executed
		cout<<x<<" "<<a<<endl;
}
int main(){

fun();
fun();
fun();
}
