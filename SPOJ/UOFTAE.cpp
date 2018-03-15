/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll findVal(ll a[],ll b[],ll n,ll m)
{
	vector <ll> dp1,dp2;
	if(n==1)
	{
		if(a[0]<=m&&b[0]>=m)
			return 1;
		else
			return 0;
	}
	for(ll i=a[0];i<=min(m,b[0]);i++)
	{
		dp1.push_back(i);
	}
	
	for(ll i=1;i<n-1;i++)
	{
		//cout<<dp1.size()<<endl;
		dp2.clear();
		for(ll j=0;j<dp1.size();j++)
		{
			for(ll k=a[i];k+dp1[j]<m&&k<=b[i];k++)
				dp2.push_back(k+dp1[j]);
		}
		dp1=dp2;
	}
	dp2.clear();
	//for(ll i=0;i<dp1.size();i++)
	//	cout<<dp1[i]<<" ";
	//cout<<endl;
	ll c=0;
	//cout<<dp1.size()<<endl;
	for(ll i=0;i<dp1.size();i++)
	{
		if(m-dp1[i]>=a[n-1]&&m-dp1[i]<=b[n-1])
			c++;
	}
	/*
	for(i=2;i<n;i++)
	{
		dp2.clear();
		if(a[i]+dp1[0]>m)
			break;
		for(ll j=a[i];j<=min(b[i],m);j++)
		{
			for(ll k=0;k<dp1.size() && dp1[k]+j<=m;k++)
			{
				dp2.push_back(dp1[k]+j);
				if(i==n-1&&dp1[k]+j==m)
					c++;
			}
		}
		dp1=dp2;
		
	}
	*/
	
	
	return c;
}
int main()
{
	ios::sync_with_stdio(false);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		ll *a=new ll[n],*b=new ll[n];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i]>>b[i];
		}
		cout<<findVal(a,b,n,m)%1000000007<<endl;
	}
}