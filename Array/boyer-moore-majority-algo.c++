#include<bits/stdc++.h>
using namespace std;
int main()
{
    int freq=0;
    int x;
    cout<<"enter number to search its frequency"<<endl;
    cin>>x;
    //most efficient algo to find majority of an element in an array
    int arr[]={2,3,2,5,6,2};

    for (int i = 0; i < 6; i++)
    {
     if (arr[i]==x)
     {
         freq++;
     }
        

        
    }
    cout<<"frequency of "<<x<<" in given array is "<<freq<<endl;

return 0;
}