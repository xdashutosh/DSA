#include<bits/stdc++.h>
using namespace std;
int main()
{ int currsum=0;
int total=0;
 int arr[]={1,2,2};
 for (int i = 0; i < 3; i++)
 {
currsum=0;
for (int j = i; j < 3; j++)
{
    currsum+=arr[j];
    cout<<currsum<<endl;
total+=currsum;    
}
     
 }
 cout<<"total sum of subarray is "<<total<<endl;
 
    
return 0;
}