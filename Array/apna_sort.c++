#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int arr[]={2,1,6,3,4};
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j >i; j--)
        {
            if (arr[i]>arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

            }
            
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i];

    }
    
    
    
return 0;
}