#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
int t,n,i;
int count;
count=0;
cin>>t;

while(t--)	
{
	test_case();
	

}
return 0;
}
void test_case()
{
vector <int> v;
for(auto &itr :v)
	cin>>itr;
sort(v.begin() v.end());
int mn=v[0];

for(i=0;i<v.end();i++)
{
	if(v[i]==mn)
	{
		count++
	}
	else{
		break;
	}
}
cout<<n-count<</n;
}
