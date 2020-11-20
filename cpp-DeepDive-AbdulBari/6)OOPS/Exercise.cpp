#include<iostream>

using namespace std;

class Student{
	private:
		int roll;
		string name;
		int marks1,marks2,marks3;
	public:
		Student(int r,string n,int m1,int m2,int m3){
			roll=r;
			name=n;
			marks1=m1;
			marks2=m2;
			marks3=m3;
		}
		int total()
		{
			return marks1+marks2+marks3;
		}
		char grade(){
			float avg=total()/3;
			if(avg>80){
				return 'A';
			}
			else if(avg>60){
				return 'B';
			}
			else{
				return 'C';
			}
		}
};
int main(){
	Student s(1,"sa",21,12,112);
	cout<<s.total()<<endl;
	cout<<s.grade();
}
