/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	

#include <bits/stdc++.h>
using namespace std;
int bat(int a[],int n,int m)
{
	int dp[1001]={0};
	dp[n-1]=1;
	int M=1,mx;
	for(int i=n-2;i>m;i--)
	{
		mx=1;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
				mx=max(mx,1+dp[j]);
		}
		dp[i]=mx;
		//cout<<mx<<endl;
		M=max(mx,M);
	}
	//cout<<M<<endl;
	dp[m]=++M;
	for(int i=m-1;i>=0;i--)
	{
		mx=1;
		for(int j=i+1;j<=m;j++)
		{
			if(a[i]>a[j])
				mx=max(mx,1+dp[j]);
		}
		dp[i]=mx;
		M=max(mx,M);

	}

	return M;

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int *a=new int[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cout<<bat(a,n,m)<<endl;
	}
}