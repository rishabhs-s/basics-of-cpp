#include<conio.h>
#include<iostream>
#include <cstring>
using namespace std;
struct book{//structure & book is now considerd as a datatype 
	int bookid;
	char bookname[25];
	float price;
};
book input();
void display(book);
int main()
{
	book b1={21,"boookid",234};//object of book structure
	book b2 ,b3,b4;
	b2.bookid=923;
	b2.price=121.2;
	//b2.bookname="name";--->gives error
	strcpy(b2.bookname,"name");
	b3=b2;
	b4=input();
	getch();
}
void display(book b)
{
	cout<<"\n"<<b.bookid<<"\n"<<b.bookname<<"\n"<<b.price;
}
book input()
{
	book b;
	cout<<"Enter bookid,bookname and price  ";
	cin>>b.bookid>>b.bookname>>b.price;
	return(b);
}
