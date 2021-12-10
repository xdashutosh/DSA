#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    if (n==0)
    {
    return ;
    }
    
    cout<<n<<endl;//reverse order
    print(n-1);
    cout<<n<<endl;

}
int main()
{
    print(5);
return 0;
}