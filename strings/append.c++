#include<bits/stdc++.h>
using namespace std;
int main()
{

    string st1;
    string st2;
    cout<<"enter first string"<<endl;
    getline(cin,st1);
    cout<<"enter second string"<<endl;
    getline(cin,st2);
    st1.append(st2);
    cout<<st1<<endl;
    st1.clear();
    //another way
    getline(cin,st1);
    st1=st1+st2;
    cout<<st1<<endl;

return 0;
}