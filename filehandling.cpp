#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	fstream fout;//object of fstream
	fout.open("text.txt");
	fout<<"hello";
}
