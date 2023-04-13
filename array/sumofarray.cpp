#include<bits/stdc++.h>
using namespace std;
int Sumofarray(int arr[],int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
    sum+=arr[i];
    }
    return sum;
    
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

cout<<"sum of elements is "<<Sumofarray(arr,size);
return 0;
}