#include<iostream>
#include<conio.h>
using namespace std;
template<class X>
X func(X a,X b){
	if(a>b){
		return (a);
	}
	else {
		return(b);
	}
} 

int main()
{
	cout<<func(1,4);
	cout<<"\n"<<func(5.32,4.12);//because of template we can pass int or float value in the same function
}
