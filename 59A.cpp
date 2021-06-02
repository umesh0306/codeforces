#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin>>s;
	int cap=0;
	int sma=0;
	
	for(int i=0;i<n;i++)
	{
		if(s[i]<97)
			cap++;
		else 
			sma++;
		
		if(cap>sma){
			toupper(s[i]);
		cout<<s;}
		else{
			tolower(s[i]);
		cout<<s;
		}
		return 0;
	}
	