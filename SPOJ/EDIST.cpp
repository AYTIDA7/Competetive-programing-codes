/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include<bits/stdc++.h>
using namespace std;
int dp[2001][2001];
int min(int a,int b,int c)
{
	return min(min(a,b),c);
}

int dpTable(char s1[],char s2[],int s1_l,int s2_l)
{

	for(int i=0;i<=s1_l;i++)
	{
		for(int j=0;j<=s2_l;j++)
		{
			if(i==0)	dp[i][j]=j;
			else if(j==0)	dp[i][j]=i;
			else if(s1[i-1]==s2[j-1])
				dp[i][j]=dp[i-1][j-1];
			else
				dp[i][j]=1+min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1]);				
		}
	}
	return dp[s1_l][s2_l];
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s1[2001],s2[2001];
		cin>>s1>>s2;
		cout<<dpTable(s1,s2,strlen(s1),strlen(s2))<<endl;
	}
}