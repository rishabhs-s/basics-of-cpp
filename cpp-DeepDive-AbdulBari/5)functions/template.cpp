#include<stdio.h>
#include<iostream>
using namespace std;


template<class T>

T add(T x,T y)	
{

return x+y;
}

int main(){
	cout<<add(23,23)<<endl;
	cout<<add(23.12f,23.12f)<<endl;
	
	
}

