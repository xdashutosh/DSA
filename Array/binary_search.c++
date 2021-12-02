#include<bits/stdc++.h>
using namespace std;
int bsearch(int arr[],int size,int key)
{
int start=0;
int end=size;
while (start<=end)
{
    int mid =(start+end)/2;
    if (arr[mid]==key)
    {
        return mid;
    }
    else if (arr[mid]>key)
    {
        end=mid-1;
    }
    else{
        start=mid+1;
    }
}
return -1;
}
int main()
{int arr[]={1,2,3,4,5,6};
cout<<bsearch(arr,sizeof(arr),4);
return 0;
}