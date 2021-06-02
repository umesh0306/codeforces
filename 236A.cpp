#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);

string s;
cin>>s;
set <char> s1;
for(auto &itr:s)
s1.insert(s[itr]);

if(s1.size()%2==0)
cout<<"CHAT WITH HER!";
else
cout<<"IGNORE HIM!";
return 0;
}