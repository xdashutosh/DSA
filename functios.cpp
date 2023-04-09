#include<bits/stdc++.h>
using namespace std;

int power(int base,int upvalue)
{
    int ans=1;
    for (int i = 1; i <= upvalue; i++)
    {
        ans=ans*base;
    }
    return ans;
    
}

bool evenORodd(int n)
{
    if (n%2==0)
    {
    return true;
    }
    else{
        return false;
    }
    
}

int fact(int n)
{ int ans=1;
if (n==0)
{
    return 1;
}

else{


    for (int i = 1; i <= n; i++)
    {
        ans=ans*i;
    }
return ans;
}
}

int nCr(int n,int r)
{ 

int numvalue=fact(n);
int denovalue=fact(r);
int seconddenovalue=n-r;
int denomultivalue=fact(seconddenovalue);
 return numvalue/(denovalue *denomultivalue);

}
    




int main()
{ 
    cout<<power(2,10)<<endl;
    cout<<power(3,3)<<endl;

    cout<<evenORodd(10)<<endl;
    cout<<evenORodd(19)<<endl;

    cout<<fact(5)<<endl;

    cout<<nCr(8,2)<<endl;
    cout<<nCr(13,0)<<endl;
return 0;
}