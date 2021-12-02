#include<bits/stdc++.h>
using namespace std;
int main()
{int index,x;
  cout<<"enter index no to add element"<<endl;
cin>>index;
cout<<"enter value of element"<<endl;
cin>>x;
int arr[100]={1,3,4,5,6};
   for (int i = 4; i>=index; i--)
   {
    arr[i++]=arr[i];
   }
   arr[index]=x;
   
   
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i];
    }
    
    
return 0;
}