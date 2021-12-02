#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter elements of array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
for (int i = 0; i < size-1; i++)
{
    if (arr[0]>arr[i])
    {
        arr[0]=arr[i];
    }
    else if (arr[size-1]<arr[i])
    {
        arr[size-1]=arr[i];
    }
    
    
}

cout<<"minimum no is "<<arr[0]<<endl;
cout<<"maximum no is "<<arr[size-1]<<endl;

return 0;
}