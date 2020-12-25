#include<iostream>
using namespace std;


class rect{
	private:
	int length;
	int breadth;
	public:
		void setbreadth(int b){
			breadth=b;	
		}
			void setlength(int l){
			length=l;
		}
		int getbreadth(){
			return breadth;	
		}
		int getlength(){
			return length;	
		}
};
class cuboid:public rect{
	private:
		int height;
		public:
			void setheight(int h){
				height=h;
			}
			int getheight(){
			return height;	
		}
		int volume(){
			return getlength()*getbreadth()*height;
		}
	
};
int main(){
	cuboid c;
	c.setbreadth(10);
	c.setlength(121);
	c.setheight(12);
	cout<<c.volume();
}
	

