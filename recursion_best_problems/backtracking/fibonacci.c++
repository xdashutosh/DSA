#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
if (n==2 || n==3)
{
    return 1;
}
else if (n==1)
{
    return 0;
}

return fib(n-1)+fib(n-2);

}
int main()
{
    int n;
    cout<<"enter a no to check fibo at that number"<<endl;
    cin>>n;
    cout<<fib(n)<<endl;
return 0;
}