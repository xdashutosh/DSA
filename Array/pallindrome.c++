#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
    cout<<"enter word size"<<endl;
cin>>n;
    char arr[n+1];
    cout<<"enter word!"<<endl;
    cin>>arr;
    for (int i = 0; i <n; i++)
    {
   if (arr[i]!=arr[n-1-i])
   {
    cout<<"not a pallindrome"<<endl;
    break;
   }
   else if(i==n/2){
       cout<<"yessh!!! its a pallindrome"<<endl;
   }
   
    
    }
    

    
return 0;
}