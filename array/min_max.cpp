#include<bits/stdc++.h>
using namespace std;

int max(int arr[],int n)
{
int max=INT_MIN;
for (int i = 0; i <n; i++)
{
    if (arr[i]>max)
    {
    max=arr[i];
    }
    
}
return max;

}

int min(int arr[],int n)
{
int min=INT_MAX;
for (int i = 0; i <n; i++)
{
    if (arr[i]<min)
    {
    min=arr[i];
    }
    
}
return min;

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

cout<<"maximum element in array is "<<max(arr,size)<<endl;   
cout<<"minimum element in array is "<<min(arr,size)<<endl;   
    

return 0;
}