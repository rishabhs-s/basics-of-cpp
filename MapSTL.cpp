#include <iostream>
#include<map>

using namespace std;

int main()
{
   map<int,string> student;
   student[100]="rishabh";
   student[190]="sharma";
   student[181]="im";
   
   map<int,string> student1 {{100,"rish"},{1902,"us"},{123,"dsx"}};
   
   map<int,string>::iterator p=student.begin();
   while(p!=student.end()){
   cout<< p->second <<endl;
   p++;
   
   }
   cout<<"use of at() :"<<student.at(100)<<endl;
   cout<<"use of size() :"<<student.size()<<endl;
   cout<<"empty() :"<<student.empty();
}
