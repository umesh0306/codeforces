#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
int i,n,k;
int sum=0;
int counter=0;
cin>>n>>k;
int a[51];
for(i=0;i<n;i++){

cin>>a[i];

}
for(i=0;i<n;i++)
{
	if(a[i]=!0)
	{
if((a[i]>=a[k])
sum++;}
}
cout<<sum-1;
return 0;
}