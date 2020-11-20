#include<iostream>

using namespace std;


class rect{
	
	private:
		int len;
		int breadth;
	public:
		void setlen(int l){
			len=l;
		}
		void setbreadth(int b){
			breadth=b;
		}
		int getbreadth(){
			return breadth;
		}
		int getlength(){
			return len;
		}
};

int main(){
	rect r;
	r.setlen(10);
	r.setbreadth(102);
	cout<<r.getlength()<<endl;
cout<<r.getbreadth();
	
}
