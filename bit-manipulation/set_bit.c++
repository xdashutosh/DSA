#include<bits/stdc++.h>
using namespace std;
int set_bit(int num,int index){
    return num|(1<<index);
}
int main()
{int n,i;
cin>>n>>i;
    cout<<set_bit(n,i);
return 0;
}