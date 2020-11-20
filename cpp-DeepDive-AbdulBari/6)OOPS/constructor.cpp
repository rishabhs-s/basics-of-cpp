#include<iostream>

using namespace std;


class Rectangle{
	private:
	int length;
	int breadth;
	public :
		Rectangle(){ //non parmetrized construct
			 length=0;
			 breadth=0;
		}
		Rectangle(int l,int b){ //non parmetrized construct
			 setlength(l);
			 setbreadth(b);
		}
		
		void setlength(int l){
			length=l;
		}
		void setbreadth(int b){
			breadth=b;
		}
		int area(){
			return length*breadth;
		}
};

int main(){
	Rectangle r;
	cout<<r.area()<<endl;
	Rectangle r1(10,5);
	cout<<r1.area();
}

	
