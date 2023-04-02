#include<iostream>
using namespace std;
int main()
{ int n;
cin>>n;
cout<<endl;
int count =1;
    for (int i = 1; i < n+1; i++)
    {
        int value=i;
        for (int j = 1; j <=i ; j++)
        {
        cout<<" "<<value<<" ";
        value++;
        }
       cout<<endl;
    

        
    }
    
    return 0;
    }