#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s1,s2;
	cin>>s1>>s2;
	int x=0;
	for(auto &itr:s1)
	{
		for(auto &itr:s2)
		{
			if(s1[itr]==s2[itr] || s1[itr]+32==s2[itr] || s1[itr] == s2[itr]+32)
			{ 
                 break;
			}
			if(s1[itr]>s2[itr])
				x--;
			else
				x++;
}}
return 0;
}
			