#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
void show(list <int> g){
	list <int> :: iterator it;
	for(it = g.begin(); it != g.end(); ++it) 
		cout<<*it<<" ";
		
	
}
int main(){
	list<int> l,l1;
	for(int i=0;i<10;i++){
		l.push_front(i*2);
	l1.push_back(i*2);
	}
	
	show(l);
	cout<<endl;
	show(l1);
	
}
