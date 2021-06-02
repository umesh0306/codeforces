#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);

int a[100][3];
cin>>n;
for(int i=0;i<n;i++)
{
for(int j=0;j<3;j++)
{
cin>>a[i][j];
}
}
for(int i=0;i<n;i++)
{

int sum1+=a[i][0];
int sum2+=a[i][1];
int sum3+=a[i][2];
}
if((sum1==0) && (sum2==0) && (sum3==0))
cout<<YES;
else
cout<<NO;

return 0;
}