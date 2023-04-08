#include<bits/stdc++.h>
using namespace std;
int main()
{
int a=2;
int b=3;
int c=5;
cout <<"a&b "<< (a&b)<<endl;
cout <<"a|b "<< (a|b)<<endl;
cout <<"a^b "<< (a^b)<<endl;
cout<<"~c "<<(~c)<<endl;

//left shift(<<) and right shift(>>)
cout<<"c RS 2 times "<<(c<<2)<<endl; 
cout<<"c LS 1 times "<<(c>>1)<<endl; 
return 0;
}