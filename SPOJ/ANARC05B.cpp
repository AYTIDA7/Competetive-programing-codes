/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<ll,ll> m;
int main()
{
	while(1)
	{
		m.clear();
		ll n1,n2;
		cin>>n1;
		if(n1==0) break;
		vector<ll> v1(n1);
		for(ll i=0;i<n1;i++)
		{
			cin>>v1[i];
			m[v1[i]]++;
		}
		cin>>n2;
		vector<ll> v2(n2),l;
		for(ll i=0;i<n2;i++)
		{
			cin>>v2[i];
			m[v2[i]]++;
			if(m[v2[i]]==2)
				l.push_back(v2[i]);
		}
		ll k=0,j=0,S=0,S1=0,S2=0;
		for(vector<ll>::iterator i=l.begin();i!=l.end();i++)
		{
			ll s1=0,s2=0;
			for(;v1[k]!=*i&&k<n1;k++)
				s1+=v1[k];
			for(;v2[j]!=*i&&j<n2;j++)
				s2+=v2[j];
			//cout<<s
			S+=max(s1,s2)+(*i);
			k++;j++;
		}
		for(;k<n1;k++)
			S1+=v1[k];
		for(;j<n2;j++)
			S2+=v2[j];
		S+=max(S1,S2);
		cout<<S<<endl;
	}
}