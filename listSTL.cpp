#include <iostream>
#include<list>

using namespace std;

int main()
{
   list<int> l1{1,3,4};
   list<string> l2 {"rishabh","sharma"};
   list<int>::iterator p=l1.begin();//sets p to first position

   while(p!=l1.end())
   {
       cout<<*p<<endl;
       p++;
   }
   
   cout<<"total size of l1:"<<l1.size()<<endl;
      cout<<"total size of l2 :"<<l2.size()<<endl;
      
      l1.push_back(100);//insert at back
      l1.push_front(90);//insets at front
      
       list<int>::iterator p1=l1.begin();//sets p to first position

   while(p1!=l1.end())
   {
       cout<<*p1<<endl;
       p1++;
   }
      
      cout<<"total size of l1:"<<l1.size()<<endl;
      
    list<int> l3{98,8,990,567,8790};
    l3.sort();
    list<int>::iterator p2=l3.begin();
     while(p2!=l3.end())
   {
       cout<<*p2<<endl;
       p2++;
   }
   
    
    

}
