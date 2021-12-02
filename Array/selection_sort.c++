#include<bits/stdc++.h>
using namespace std;
int main()
{ int arr[] = { 2,6,1,2,5}; //compare loop of i willbe 4times as
for (int i = 0; i < 5-1; i++)
{
    for (int j = i+1; j < 5; j++)
    {
        if (arr[i]>arr[j])
        {
            int x=arr[i];
            arr[i] = arr[j];
            arr[j] = x;
        }
        
    }
    
}

for (int i = 0; i < 5; i++)
{
    cout<<arr[i];
}


return 0;
}