#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="ashutosh";
    for (int i = s.find("t"); i < s.size(); i++)
    {
        cout<<s[i];
    }
    cout<<endl;
    cout<<s.substr(s.find("shu"),s.find("uto"));
    
return 0;
}