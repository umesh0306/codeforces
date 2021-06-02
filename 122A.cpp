#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin>>s;
	int m,n;
	m=s/4;
	n=s/7;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='4' || s[i]=='7' || m==0 || n==0)
			cout<<"YES";
		else
			cout<<"NO";
	}
return 0;
}
