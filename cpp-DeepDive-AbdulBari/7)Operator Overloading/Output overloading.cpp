//#include<iostream>
//using namespace std;
//
//class complex{
//	public:
//	int real;
//	int img;
//	
//	complex (int r=0,int i=0){
//		real=r;
//		img=i;
//	}
//	void display(){
//	cout<<real<<" "<<img;
//	}
//	
//complex friend complex operator<<(complex a,complex b);
//};
//friend complex operator<< (complex a,complex b){
//	complex temp;
//	temp.real=c1.real+c2.real;
//	temp.img=c1.img+c2.img;
//	return temp;
//}
//
//int main(){
//	complex c1(10,21);
//	complex c2(10,211);
////	complex c3=c2+c1;
//	cout<<;
//}
#include <iostream>
using namespace std;
class Complex
{
private:
int real;
int img;
public:
Complex(int r=0,int i=0)
{
real=r;
img=i;
}
friend ostream & operator<<(ostream &out,Complex &c);
};
ostream & operator<<(ostream &out,Complex &c)
{
out<<c.real<<"+i"<<c.img<<endl;
return out;
}
int main()
{
Complex c(10,5);
cout<<c<<endl;
operator<<(cout,c);
}
