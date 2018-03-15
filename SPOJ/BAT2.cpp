/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	

#include <bits/stdc++.h>
using namespace std;

int bOrW(vector<int> a,int n)//black->increasing
{
	//cout<<"test\n";
	vector <vector<vector<int> > > dp(202,vector<vector<int> >(202,vector<int>(202,0)));
	for(int i=1;i<=n;i++)
	{
		for(int u=i+1;u<=n+1;u++)
		{
			for(int l=i+1;l<=n+1;l++)
			{
				dp[i][u][l]=1+dp[i-1][u][l];
				if(l>n||a[l-1]<a[i-1])
					dp[i][u][l]=min(dp[i][u][l],dp[i-1][u][i]);
				if(u>n||a[u-1]>a[i-1])
					dp[i][u][l]=min(dp[i][u][l],dp[i-1][i][l]);
			}	
		}
	}
	return dp[n][n+1][n+1];

}
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{	
		
		int n;
		cin>>n;
		vector <int> ar(n+2);
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		ar[n]=INT_MIN;
		ar[n+1]=INT_MAX;
		cout<<n-bOrW(ar,n)<<"\n";
	}
}