#include<iostream>
using namespace std;

int main(){
	int x,y,z;
	cin>>x>>y;
	try
	{
		if (y==0)
		throw 1;
		z=x/y;
		cout<<z;
	}
	catch(int e){
		cout<<"Error code "<<e;
	}
		
}
