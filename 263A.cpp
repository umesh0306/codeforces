
#include<bits/stdc++.h>
using namespace std;
 
 int main()
 {
	 ios_base::sync_with_stdio(0);
	 cin.tie(0);
	 int a[5][5];
	 int n=5;
	 int i,j;
	 for( i=0;i<n;i++)
	 {
		 for(int j=0;j<n;j++)
		 {
			 cin>>a[i][j];
		 }
	 }
	 for(i=0;i<n;i++)
	 {
		 for(j=0;j<n;j++)
		 {
			 if(a[i][j]==1)
				 cout<<abs(2-i)<<abs(2-j);
 }}
 return 0;
 }
 