#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    int r;
    while (r>0)
    {
        r=a-b;
        if (b<r)
        {
            a=r;
        }
        else{
        a=b;
        b=r;
        }

        if (a==b)
        {
            break;
        }
        
    }
    return r;
    

    
    

}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
return 0;
}