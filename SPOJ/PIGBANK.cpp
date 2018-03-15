/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include<bits/stdc++.h>
using namespace std;
int dp(int w,int a[][2],int n)
{
	int dp[w+1];
	dp[0]=0;
	for(int i=1;i<=w;i++)
	{
		dp[i]=-1;
		for(int j=0;j<n;j++)
		{
			if(i>=a[j][1]&&dp[i-(a[j][1])]!=-1&&(dp[i]==-1||a[j][0]+dp[i-a[j][1]]<=dp[i]))
				dp[i]=a[j][0]+dp[i-a[j][1]];
		}
	}
	return dp[w];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int w1,w2;
		cin>>w1>>w2;
		int n;
		cin>>n;
		int a[10000][2];
		for(int i=0;i<n;i++)
			cin>>a[i][0]>>a[i][1];
		int m=dp(w2-w1,a,n);
		if(m>=0)
			cout<<"The minimum amount of money in the piggy-bank is "<<m<<".\n";
		else
			cout<<"This is impossible.\n";
	}
}