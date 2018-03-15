/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
#define inf 999999999999
vector <int> bc(25);
vector<vector<int> >cost(25,(vector<int>(25))),rating(25,(vector<int>(25)));
int N,m,k;
int dp[25][1001][2];
int knapsack(int n,int val,bool flag)
{
	if(n==0)
		return 0;
	//cout<<"test\n";
	if(dp[n][val][flag]!=-1)
		return dp[n][val][flag];
	int v=0;
	int withOut=knapsack(n-1,val,0);
	if(flag==false&&val>=bc[n])
	{
		val-=bc[n];
		for(int i=1;i<=m;i++)
		{
			if(val>=cost[n][i])
			{
				v=max(v,knapsack(n,val-cost[n][i],true)+rating[n][i]);
			}
		}
		val+=bc[n];
	}
	else if(flag)
	{
		for(int i=1;i<=m;i++)
		{
			if(val>=cost[n][i])
			{
				v=max(v,knapsack(n,val-cost[n][i],flag)+rating[n][i]);
			}
		}
	}
	return dp[n][val][flag]=max(v,withOut);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		//ios_base::sync_with_stdio(false);
		cin>>N>>m>>k;
		for(int i=1;i<=N;i++)
			cin>>bc[i];
		
		for(int i=1;i<=N;i++)
		{
			for(int j=1;j<=m;j++)
				cin>>cost[i][j];
		}
		for(int i=1;i<=N;i++)
		{
			for(int j=1;j<=m;j++)
				cin>>rating[i][j];
		}
		memset(dp,-1,sizeof(dp));
		//for(int i=0;i<n*m;i++)
		//{
		//	cout<<cost[i]<<"\t";
		//}
		//cout<<endl;
		cout<<knapsack(N,k,0)<<endl;
	}
}