#include<bits/stdc++.h>
using namespace std;
int main()
{int rate=1;
int rs=15;
int temp=0;
int ch=15;
while (ch>0)
{
    ch=ch/3+ch%3;
    temp=temp+ch;
}
cout<<ch+temp;
    
return 0;
}
