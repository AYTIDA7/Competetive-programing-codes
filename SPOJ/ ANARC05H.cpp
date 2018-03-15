/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;

int rec(string s,int p,int prev,int l,vector< vector<int> > dp )
{
	if(p==l)
		return 1;
	if(dp[p][prev]!=-1)
		return dp[p][prev];
	int sum=0;
	dp[p][prev]=0;
	for(int i=p;i<l;i++)
	{
		sum+=s[i]-48;
		if(sum>=prev)
			dp[p][prev]+=rec(s,i+1,sum,l,dp);
	}
	return dp[p][prev];
}
int main()
{
	int i=1;
	while(i++)
	{
		vector< vector<int> > dp(25,vector<int>(226,-1)); 	
		string s;
		cin>>s;
		if(s=="bye")
			break;
		cout<<i-1<<". "<<rec(s,0,0,s.length(),dp)<<endl;
	}

}