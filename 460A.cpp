#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	
	int n,m;
	cin>>n>>m;
	
	if(n<m)
		cout<<n;
	else if(n==m)
		cout<<n+1;
	else
	{
	
		int x=0;
	n/m=x;
	if(n+x/m==x)
		cout<<n+x;
	else
		cout<<n+x+1;
	}
	return 0;
}
