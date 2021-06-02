#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_basae::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin>>n;
	int cnt;
	string s;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(s[i]==s[j])
				cnt++
		}
	}
	return 0;
}