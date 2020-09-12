#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;

int main(){
	ifstream fin;
	char ch;
	fin.open("text.txt");
	ch=fin.get();
	while(!fin.eof())
	{
		cout<<ch;
		ch=fin.get();//gets next char
	}
	fin.close();
}
