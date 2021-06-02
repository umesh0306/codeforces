#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	string s;
	cin>>s;
	int sum=0
	for(int i=0;i<s.size();i++)
	{
		sum=sum+s[i];
	}
	for(int i=0;i<n;i++)
	{
		int total=0;
		total+=s[i];
		if(total>sum/2){
			cout<<i;
		break;
		}
	}
	return 0;
}