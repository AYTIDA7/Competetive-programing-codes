/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
int origi;
int dp[10000][101];
int fun(string s,int n,int player)	//1->vint,0->ada
{
	
	//cout<<s<<endl;
	
	if(dp[stoi(s)][n]!=-1)
		return dp[stoi(s)][n];
	string str=s;
	if(n==1)
	{
		if(player==1)
		{
			for(int i=0;i<4;i++)
			{
				
				s[i]=s[i]!='9'?s[i]+1:'0';

				if(stoi(s)<=origi)
				{
					dp[stoi(s)][n]=1;
					return dp[stoi(s)][n];
				}
				else
					s=str;
			}
			dp[stoi(s)][n]=0;
			return dp[stoi(s)][n];
		}
		else
		{
			for(int i=0;i<4;i++)
			{
				s[i]=s[i]!='9'?s[i]+1:'0';
				if(stoi(s)>origi)
				{
					dp[stoi(s)][n]=0;
					return dp[stoi(s)][n];
				}
				else
					s=str;
			}
			dp[stoi(s)][n]=1;
			return dp[stoi(s)][n];
		}
	}
	if(player==1)
	{
		for(int i=0;i<4;i++)
		{
			s[i]=s[i]!='9'?s[i]+1:'0';
			if(fun(s,n-1,0)==1)
			{
				dp[stoi(s)][n]=1;
				return dp[stoi(s)][n];
			}
			else
				s=str;
		}
		dp[stoi(s)][n]=0;
		return dp[stoi(s)][n];
	}
	for(int i=0;i<4;i++)
	{
		s[i]=s[i]!='9'?s[i]+1:'0';
		if(fun(s,n-1,1)==0)
		{
			dp[stoi(s)][n]=0;
			return dp[stoi(s)][n];
		}
		else
			s=str;
	}
	dp[stoi(s)][n]=1;
	return dp[stoi(s)][n];

}
int main()
{
	ios::sync_with_stdio(false);
	int x;
	cin>>x;
	while(x--)
	{
		memset(dp,-1,sizeof(dp));
		string a;
		int n;
		cin>>a>>n;
		origi=0;
		for(int i=0;i<4;i++)
			origi+=(a[i]-48)*pow(10,3-i);
		//cout<<origi<<endl;
		if(n==0)
			cout<<"Vinit"<<'\n';
		else
			cout<<(fun(a,n,0)==1?"Vinit":"Ada")<<'\n';
		
	}
}