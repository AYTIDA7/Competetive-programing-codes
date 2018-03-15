/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int activ(ll n,vector <pair<ll,ll> > cl)
{
	vector<ll> dp(n,0);
	dp[n-1]=1;
	for(ll i=n-2;i>=0;i--)
	{	
		dp[i]=(dp[i]+1+dp[i+1])%100000000;
		vector<pair<ll,ll> >::iterator j;
		j=lower_bound(cl.begin()+i,cl.end(),make_pair(cl[i].second,cl[i].second));
		if(j-cl.begin()<n)
			dp[i]=(dp[i]+dp[j-cl.begin()])%100000000;
	}
	return dp[0];
}
int main()
{
	ios_base::sync_with_stdio(false);
	while(1)
	{
		ll n;
		cin>>n;
		if(n==-1)
			break;
		vector <pair<ll,ll> > cl;
		for(ll i=0;i<n;i++)
		{
			ll a,b;
			cin>>a>>b;
			cl.push_back(make_pair(a,b));
		}
		sort(cl.begin(),cl.end());
	//	vector <int> sec;
	//	for(ll i=0;i<n;i++)
	//		sec.push_back(cl[i].second);
	//	sort(sec.begin(),sec.end());
		cout<<setw(8)<<setfill('0')<<activ(n,cl)%100000000<<endl;
	}
}