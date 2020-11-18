//The perimeters must be of differnet type in function overloading
#include<stdio.h>
#include<iostream>
using namespace std;



int add(int x,int y){
	
	return x+y;
}

int add(int x,int y ,int z){
	
	return x+y+z;
}
float add(float x,float y){
	
	return x+y;
}


int main(){
cout<<add(2,5)<<endl;
cout<<add(2,5,32)<<endl;
cout<<add(2.3f,5.2f)<<endl;
cout<<add(2,5)<<endl;
	
	
}
