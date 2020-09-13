#include <iostream>
#include<array>

using namespace std;

int main()
{
    array<int,5> arr={1,34,53,134,55};
    cout << arr.at(2)<<endl;
   // cout << arr.at(6);-->out of range
   cout<<arr[3]<<endl;
   //front returns first element of array
   //back returns last element of array
   cout<<arr.front()<<endl;
   cout<<arr.back()<<endl;//if we have less elements than total elements possible then it returns 0;
   //arr.fill(5);//makes all elements same
   int n=arr.size();
   cout<<n;
   for(int i=0;i<n-1;i++)
   {
       cout<<arr[i]<<" ";
   }
}
