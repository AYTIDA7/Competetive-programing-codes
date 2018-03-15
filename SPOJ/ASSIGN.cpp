/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
long long dp[21][1<<20];
long long assign(int a[][20],int i,int mask,int n)
{
	if(dp[i][mask]!=-1)
		return dp[i][mask];
	if(i==n||mask==((1<<n)-1))
	{
		//cout<<"terminated\n";
		return 1;
	}
	dp[i][mask]=0;
	for(int j=0;j<n;j++)
	{
		if(a[i][j]&&((mask&(1<<j))==0))
			dp[i][mask]+=assign(a,i+1,mask|(1<<j),n);
			//cout<<i<<"\t"<<mask<<'\t'<<dp[i][mask]<<endl;
	}
	return dp[i][mask];
	/*dp[0][0]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<pow(2,n);j++)
		{
			for(int k=0;k<n;k++)
			{			
				if(a[i-1][k]==1&&(j&(1<<k)))
					dp[i][j]+=dp[i-1][j^(1<<k)];
			}
		}
	}
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<pow(2,n);j++)
			cout<<dp[i][j]<<"\t";
		cout<<endl;
	}*/
	//return dp[n][int(pow(2,n))-1];
}
int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int s[20][20];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>s[i][j];
		memset(dp,-1,sizeof(dp));
		cout<<assign(s,0,0,n)<<'\n';
	}
}