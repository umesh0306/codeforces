#include<bits/stdc++.h>
using namespace std;
 int main()
 {
	 ios_base::sync_with_stdio(0);
	 cin.tie(0);
	 
	 int t,n;
	 cin>>n>>t;
	 string s;
	 cin>>s;
	 
	 
	 for(int l=0;l<t;l++)
	 {
		 t++;
		 for(inti=0;i<n;i++)
		 {
			if(s[i]=='B' && s[i+1]== 'G')
				swap(s[i] ,s[i+1]);
	 }}
	 cout<<s;
	 return 0;
 }
 