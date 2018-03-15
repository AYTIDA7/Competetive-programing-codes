/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
#define SIZ 100000
#define INF INT_MAX
//typedef vector<int> cols;
vector <int> croot;
void cr()
{
	for(int i=1;i*i*i<=SIZ;i++)
	{
		croot.push_back(i);
	}
	//cout<<croot.size()<<endl;

}
vector<vector<int> > dp(47,vector<int>(SIZ+1,INF));
void cube()
{

	int l=croot.size();
	//cout<<l<<endl;
	for(int i=0;i<=l;i++)
	{

		int p=croot[i-1]*croot[i-1]*croot[i-1];
		for(int j=0;j<=SIZ;j++)
		{
			//cout<<"a";
			
			if(i==0||j==0)
				dp[i][j]=INF;
			else if(p==j)
				dp[i][j]=1;
			else if(p<j)
				dp[i][j]=min(dp[i][p]+dp[i][j-p],dp[i-1][j]);
			else
				dp[i][j]=dp[i-1][j];
		}
		//cout<<i<<"\n";
	}

}
int main()
{
	ios_base::sync_with_stdio(false);
	int n;

	cr();
	cube();
	int i=0;
	while(cin>>n)
	{
		cout<<"Case #"<<++i<<": "<<dp[round(cbrt(n))][n]<<endl;
	}	
}
