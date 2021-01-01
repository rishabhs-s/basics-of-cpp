#include<algorithm>
#include<iostream>
#include<vector>
#include <numeric>
using namespace std;

int main(){
	int arr[]={1,4,21,2,1221,232,42,12,34,34};

	int s=sizeof(arr)/sizeof(arr[0]);
	cout<<"size is :"<<s<<endl;
	cout<<"array is :";
		for(int i=0;i<s;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	//converting array to vector
	vector<int> vect(arr ,arr+s);
	cout<<"vector is :";
	for(int i=0;i<s;i++){
		cout<<vect[i]<<" ";
	}
	//sorting the vector
	cout<<endl;
	sort(vect.begin(),vect.end());
	cout<<"sorted :";
	for (int i=0;i<s;i++){
		cout<<vect[i]<<" ";
	}
	cout<<endl;
	//reversing the vector
	reverse(vect.begin(),vect.end());
	cout<<"revesed :";
	for(int i=0;i<s;i++){
		cout<<vect[i]<<" ";
	}
	cout<<endl;
	//max element
	cout<< "max element :"<<*max_element(vect.begin(), vect.end())<<endl;
	//minimum element
	cout<<"min element :"<<*min_element(vect.begin(), vect.end())<<endl;
	//acculmulate/sum
	cout<<"sum is :"<<accumulate(vect.begin(), vect.end(),0)<<endl;
	//count the occurences of an element
	cout<<"count of 34 is "<<count(vect.begin(),vect.end(),34);
	//find finds the last address
	find(vect.begin(), vect.end(),5) != vect.end()?
                         cout << "\nElement found"<<endl:
                     cout << "\nElement not found"<<endl;
	//lower bound
	sort(vect.begin(), vect.end());
	auto p  =lower_bound(vect.begin(),vect.end(),2);
	cout << p-vect.begin() << endl;
	auto q  =upper_bound(vect.begin(),vect.end(),2);
	cout << q-vect.begin() << endl;
	
				
	
		
}
