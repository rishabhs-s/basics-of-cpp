#include <iostream>
#include<vector>

using namespace std;
int main(){
    vector <int> v1 {10,20,40};//intial size=3->no.of elements initialized
    vector<char> v2(4);//4 is the length`
    vector<string> v3 (3,"hello");// all the three elements initialized with hello
    cout<<v3[0]<<endl;
    cout<<v3[1]<<endl;
    cout<<v3[2]<<endl;
    //vector<string> v4 (3,"hello","rishabh","fa");->wrong
    vector <int> v5 {10,20,40,34,32};
    for(int i=0;i<5;i++)
    {
        cout<<v5[i]<<endl;
    }
    vector <int> v6;
    cout<<"capacity="<<v6.capacity()<<endl;//initially 0
    v6.push_back(10);
    cout<<"capacity="<<v6.capacity()<<endl;
    v6.push_back(10);
    cout<<"capacity="<<v6.capacity()<<endl;
    v6.push_back(10);
    cout<<"capacity="<<v6.capacity()<<endl;//double capacity
    v6.pop_back();
    cout<<"capacity="<<v6.capacity()<<endl;
    v6.pop_back();
    cout<<"capacity="<<v6.capacity()<<endl;
    v6.pop_back();
    cout<<"capacity="<<v6.capacity()<<endl;//pop does not lower the capacity
    v6.clear();
    cout<<"capacity="<<v6.capacity()<<endl;//max no. can be added
    cout<<"size="<<v6.size()<<endl;//no,o f elements present
    
    
}


