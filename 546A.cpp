#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int k,n,w;
	cin>>k>>n>>w;
	
	int sum=0;
	for(int i=0;i<w;i++)
	{
		sum+=k*w;
		
	}
	cout<<n-w;
	return 0;
}