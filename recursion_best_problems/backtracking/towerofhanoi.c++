#include<bits/stdc++.h>
using namespace std;
int counter=0;
void TOH(int n,char srcA,char destC ,char helperB)
{

if (n==0)
{
    return;
}



TOH(n-1,srcA,helperB,destC); //step1
cout<<"move from "<<srcA<<" to "<<destC<<endl;
TOH(n-1,helperB,destC,srcA);//step2
counter++;


}
int main()
{


TOH(3,'a','c','b');
cout<<counter<<endl;
return 0;
}