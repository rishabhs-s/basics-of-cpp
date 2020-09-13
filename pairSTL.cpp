#include <iostream>
#include<array>

using namespace std;

class student{
    private:
    string name;
    int age;
    
    public:
    void setname(string x,int y){
        name=x;
        y=age;
    }
    void show(){
        
        cout<<"\nname :"<<name<<endl;
        cout<<"age :"<<age<<"\n";
    }
};

int main()
{
  
    pair<string,int>p1;
    pair<string,string>p2;
    pair<string,float>p3;
    pair<int , student>p4;
    
    p1=make_pair("rish",12);
    p2=make_pair("firstname","second name");
    p3=make_pair("rishabh",0.2f);
    student s;
    s.setname("rishabh",20);
    p4=make_pair(1,s);
    
    
    cout<<"pair1 :"<<p1.first<<"->"<<p1.second<<endl;
    cout<<"pair4 :"<<p4.first<<"->";
    student s2=p4.second;
    s2.show();

    
}
