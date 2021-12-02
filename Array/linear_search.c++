#include<bits/stdc++.h>
using namespace std;
int lsearch(int arr[],int size,int key)
{
    for (int i = 0; i < size; i++)
    {
    if (arr[i]==key)
    {
        return i;
    }
    
    
    }
return -1;    
}
int main()
{
    int ar[]={1,5,3,6,9};
    cout<<lsearch(ar,sizeof(ar),10);
    
    
return 0;
}