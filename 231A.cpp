#include<iostream>
using namespace std;
int main(){
	

int a,b,c,sum,count;
int i,j,n;
cin>>n;
for(i=o;i<n;i++)
{
	cin>>a>>b>>c;
	sum=a+b+c;
	if(sum>=2)
		count++;
	sum=0;
}
cout<<count;
}
return 0;