#include <iostream>
#include<array>

using namespace std;

int main()
{
    array<int,5> arr1={1,34,53,134,55};
    array<int,5> arr2={232,32,31,311,23};
    
    arr1.swap(arr2);
    for(int i=0;i<5;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr2[i]<<" ";
    }
    
    
}
