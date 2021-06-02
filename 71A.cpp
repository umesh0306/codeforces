#include<iostream>
#include<String>
using namespace std;
 int main()
 
 {
	 int n;
	 cin>>n;

	 int i;
	 for(i=0;i<n;i++)
	 {
		 
	 char s[100] ;
	 cin>>s;
	 int x;
	 x=strlen(s);
	 if(x>10)
	 {
		 cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
	 }
	 else
		 cout<<s<<endl;
	 }
	 return 0;
 }