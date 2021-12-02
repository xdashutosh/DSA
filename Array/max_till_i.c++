#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,0,5,4,6,8};
for (int i = 1; i < 6; i++)
{
    

if(arr[i]<arr[i-1])
{
arr[i]=arr[i-1];        
    }
    
}


for (int i = 0; i < 6; i++)
{
    cout<<arr[i];
}



return 0;
}