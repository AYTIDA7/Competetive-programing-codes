/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
long long int dp[1000][1000];
long long int max(long long int a, long long int b,long long int c)
{
	return max(max(a,b),c);
}
void initVal(int a[][100],int h,int w)
{
	for(int i=0;i<h;i++)
		for(int j=0;j<w;j++)
		{
			if(i==0)
				dp[i][j]=a[i][j];
			else
				dp[i][j]=-1;
		}
}
long long int stones(int a[][100],int i,int j,int h,int w)
{
	if(i==h)
		return 0;
	if(dp[i][j]!=-1)
		return dp[i][j];
	else
	{
		if(j==0)
			dp[i][j]=a[i][j]+max(stones(a,i-1,j,h,w),stones(a,i-1,j+1,h,w));
		else if(j==w-1)
			dp[i][j]=a[i][j]+max(stones(a,i-1,j,h,w),stones(a,i-1,j-1,h,w));
		else
			dp[i][j]=a[i][j]+max(stones(a,i-1,j-1,h,w),stones(a,i-1,j,h,w),stones(a,i-1,j+1,h,w));
	}
	return dp[i][j];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int h,w;
		cin>>h>>w;
		int a[100][100];
		for(int i=0;i<h;i++)
			for(int j=0;j<w;j++)
				cin>>a[i][j];
		initVal(a,h,w);
		for(int i=0;i<w;i++)
			stones(a,h-1,i,h,w);
		long long int max=0;
		for(int i=0;i<w;i++)
			if(max<dp[h-1][i])
				max=dp[h-1][i];
		cout<<max<<endl;
	}
}