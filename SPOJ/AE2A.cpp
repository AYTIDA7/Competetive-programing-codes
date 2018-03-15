/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
typedef vector<float> rows;
vector <rows> checkProb(int a, int b)
{
	vector<rows> dp(546,rows(1909,0.0));
	for(int i=0;i<=a;i++)
	{
		for(int j=0;j<=b;j++)
		{
			if(i==0||j<i||j==0)
				dp[i][j]=0;
			else if(i==1&&j<=6&&j>0)
			{
				dp[i][j]=1/6.0;
			}
			else
			{
				float prob=0;
				for(int k=1;k<min(7,j);k++)
				{
					
						prob+=dp[i-1][j-k]*1/6.0;
				}
				dp[i][j]=prob;
			}
		}
	}
	
	//for(int i=1;i<=a;i++)
	//{	
	//	for(int j=1;j<=b;j++)
	//	{
	//		cout<<dp[i][j]<<"\t";
	//	}
	//	cout<<"\n";
	//}
	return dp;
}
int main()
{
	int t;
	vector<rows> dp;
	dp=checkProb(545,1909);
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		if(n>545||k>1908)
		{
			cout<<"0"<<endl;
			continue;
		}
		
		cout<<floor(dp[n][k]*100)<<endl;
	}
}