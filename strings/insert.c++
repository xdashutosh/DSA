#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="haha";
    s.insert(4,"lol");
    cout<<s<<endl;
    int a=s.length();
    cout<<a<<endl;
    for (int i = 0; i < s.size(); i++)
    {
        cout<<s[i]<<" ";
    }
    
return 0;
}