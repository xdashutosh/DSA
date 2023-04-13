#include<bits/stdc++.h>
using namespace std;
void reversearray(int arr[],int n)
{
    for (int i = 0; i < n/2; i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
        
        
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
int main()
{  int size;
    cout<<"enter size of array"<<endl;
    cin>>size;
    int arr[100];
    cout<<"enter "<<size<<" elements in array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
reversearray(arr,size);
return 0;
}