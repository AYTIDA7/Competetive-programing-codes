/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
int distractTime(int e,int b[],int t[],int n)
{
	vector<int> dp(1000001,0);
	for(int i=0;i<=e;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(b[j]<=i)
				dp[i]=max(t[j]+dp[i-b[j]],dp[i]);
		}
		//cout<<dp[i]<<"\t";
	}
	return dp[e];
}
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int e,n;
		cin>>e>>n;
		int *b=new int[n],*t=new int[n];
		for(int i=0;i<n;i++)
			cin>>b[i];
		for(int i=0;i<n;i++)
			cin>>t[i];
		cout<<distractTime(e,b,t,n)<<endl;
	}
}