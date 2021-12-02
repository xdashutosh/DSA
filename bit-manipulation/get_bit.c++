#include<bits/stdc++.h>
using namespace std;
int get_bit(int num,int index)
{
    return (num&(1<<index))!=0;
}
int main()
{int n,i;
    cout<<"enter number "<<endl;
    cin>>n;
    cout<<"enter index number to get bit "<<endl;
    cin>>i;
    cout<<get_bit(n,i)<<endl;

return 0;
}