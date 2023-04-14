#include<bits/stdc++.h>
using namespace std;

void swaparray(int arr[],int n)
{
   
   for (int i = 0; i <n; i+=2)
   {
    if (i+1<n)
    {
        swap(arr[i],arr[i+1]);
    }
    
   }

for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    } 
    
    
}

int main()
{
      int size;
    cout<<"enter size of array"<<endl;
    cin>>size;
    int arr[100];
    cout<<"enter "<<size<<" elements in array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    swaparray(arr,size);
return 0;
}