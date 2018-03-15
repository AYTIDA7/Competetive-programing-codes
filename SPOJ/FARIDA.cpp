/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
long long int dp[100000];
long long int coins(long long int a[],long long int n)
{
	for(long long int j=0;j<n;j++)
		dp[j]=0;
	dp[0]=a[0];
	dp[1]=a[1];
	for(long long int j=2;j<n;j++)
		for(long long int k=0;k<j-1;k++)
		{
			if(dp[j]<dp[k]+a[j])
				dp[j]=dp[k]+a[j];
		}
	long long int max=0;
	for(long long int i=0;i<n;i++)
		if(max<dp[i])
			max=dp[i];
	return max;
}
int main()
{
	long long int t;
	cin>>t;
	for(long long int i=0;i<t;i++)
	{
		long long int n;
		cin>>n;
		long long int *a=new long long int[n];
		for(long long int j=0;j<n;j++)
			cin>>a[j];
		cout<<"Case "<<i+1<<": "<<coins(a,n)<<endl;
	}
}