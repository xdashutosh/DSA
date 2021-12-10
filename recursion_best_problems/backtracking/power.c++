#include<bits/stdc++.h>
using namespace std;
int Power(int base,int power)
{
    
if(power==1)
{
    return base;
}
return base*Power(base,power-1);

}
int main()
{
    cout<<Power(3,4)<<endl;
return 0;
}