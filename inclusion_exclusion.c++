#include<bits/stdc++.h>
using namespace std;
int intersection(int range,int num1,int num2)
{int r;
    int num1d=range/num1;
    int num2d=range/num2;
    float common=range/(num1*num2);
    if (common>=1)
    {r=num1d+num2d-common;
    }
    else{
        r=num1d+num2d;
    }
    return r;
}
int main()
{int a,b;
    int range;
int start,end;
cout<<"enter starting and end point"<<endl;
cin>>start>>end;
cout<<"enter number a and b"<<endl;
cin>>a>>b;
range=end-start;
    cout<<intersection(range,a,b);

return 0;
}