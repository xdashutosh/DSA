#include<bits/stdc++.h>
using namespace std;
bool boolsort(int arr[],int size)
{
if (size==0)
{
    return 1;
}


bool restarray=boolsort(arr+1,size-1);
return (arr[0]<arr[1] && restarray);

}
int main()
{
    int n=3;
    int ar[]={1,3,2};
    cout<<boolsort(ar,n);
return 0;
}