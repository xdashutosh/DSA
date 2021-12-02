#include<bits/stdc++.h>
using namespace std;
int main()
{ int counter=1;
//bubble means here largest number first sort like a bubble comes up..
//each block of compare is called counter...if there are 5 elements in array then counter will be 5-1
//and as i said first block or counter make 1 bubble that is sort one large elementat last so loop will be run till 5-counter
//for counter 1->1 sorted element ->loop till 4
//for counter 2->2sorted element ->loop till 3 and so on

int arr[]={2,1,6,3,4};
while (counter<5)
{
    for (int i = 0; i < 5-counter; i++)
    {
        if (arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]==temp;
        }
        
    }
    
}
for (int i = 0; i < 5; i++)
{
    cout<<arr[i];
}


return 0;
}