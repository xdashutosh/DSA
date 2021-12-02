#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st1;
    string st2;
    getline(cin,st1);
    getline(cin,st2);
    int a=st1.compare(st2);
    if (a>0)
    {
        cout<<"could not match!"<<endl;
    }
    else{
        cout<<"woah! they matched..."<<endl;
    }
    
return 0;
}