/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
vector <int> m(1000001,-1);
int BLOCK;
bool cmp(pair<pair<int,int>,int> a,pair<pair<int,int>,int> b)
{
	int A=a.first.first/BLOCK,B=b.first.first/BLOCK;
	if(A!=B)
		return A<B;
	return a.first.second<b.first.second;
}
int main()
{
	ios_base::sync_with_stdio(false); 
	int n,c=0;
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(m[a[i]]==-1)
			c++,m[a[i]]++;
		m[a[i]]++;
	}
	int q;
	cin>>q;
	int l=0,r=n-1;
	pair<pair<int,int>,int > *Q=new pair<pair<int,int>,int >[q];
	
	int *ans=new int[q];
	for(int i=0;i<q;i++)
	{
		//cout<<"test\n";
		int f,s;
		cin>>f>>s;
		Q[i]=make_pair(make_pair(f-1,s-1),i);
	}
	BLOCK=ceil(sqrt(n));
	sort(Q,Q+q,cmp);
	for(int i=0;i<q;i++)
	{	while(l<Q[i].first.first)
		{
			m[a[l]]--;
			if(m[a[l]]==0)
				c--;
			l++;
		}
		while(l>Q[i].first.first)
		{
			l--;
			m[a[l]]++;
			if(m[a[l]]==1)
				c++;
			
		}
		while(r>Q[i].first.second)
		{
			m[a[r]]--;
			if(m[a[r]]==0)
				c--;
			r--;
		}
		while(r<Q[i].first.second)
		{
			r++;
			m[a[r]]++;
			if(m[a[r]]==1)
				c++;
			
		}
		ans[Q[i].second]=c;
	}
	for(int i=0;i<q;i++)
		cout<<ans[i]<<"\n";	

}