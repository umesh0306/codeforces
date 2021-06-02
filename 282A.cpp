#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	int x,i;
	int sum;
	for(i=0;i<n;i++)
	{
		cin>>x;
		sum+=x;
	}
	cout<<sum<<endl;
}