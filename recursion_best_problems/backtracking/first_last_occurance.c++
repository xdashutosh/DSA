#include<bits/stdc++.h>
using namespace std;
int first_occurrence(int arr[],int size,int x,int index)
{
if (index==size)
{
    return -1;
}

if (arr[index]==x)
{
return index;
}
return first_occurrence(arr,size,x,index+1);

}



int last_occurrence(int arr[],int size,int x,int index)
{

    int counter;
    if (index==size)
    {
        return -1;
    }

  if (arr[index]==x)
  {
      counter=index;
  }
  last_occurrence(arr,size,x,index+1);
  return counter;
    
    
}

int main()
{
    int ar[]={1,3,2,4,7,2,4};
    cout<<first_occurrence(ar,7,2,0)<<endl;
    cout<<last_occurrence(ar,7,2,0)<<endl;
return 0;
}