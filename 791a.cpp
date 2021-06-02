#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int w1,w2;
	cin>>w1>>w2;
	int cnt=0;
	while(w1=!=w2)
	
	{
		w1=3*w1;
		w2=2*w2;
        cnt++;	
	}
	if(w1==w2)
		cout<<cnt;
	return 0;
}
		
		