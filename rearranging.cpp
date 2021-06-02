#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);

string s;
cin>>s;
int x=0;
for(int i=0;i<s.size();i++)
{
x=119-s[i];
if(x>0)
s[i]=s[i]+x;
else
s[i]=s[i]-x;
}
return 0;
}