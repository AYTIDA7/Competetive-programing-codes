/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
long long int makeTruce(long long int a[],long long int sum,vector< pair<int,int> > v,int i=0)
{
	if(i==v.size())
		return sum;
	int temp=a[v[i].first-1];
	a[v[i].first-1]=0;
	int m1=makeTruce(a,sum-temp,v,i+1);
	a[v[i].first-1]=temp;
	temp=a[v[i].second-1];
	a[v[i].second-1]=0;
	int m2=makeTruce(a,sum-temp,v,i+1);
	a[v[i].second-1]=temp;
	return max(m1,m2);

}
int main()
{
	long long int inp[8],sum=0;
	for(int i=0;i<8;i++)
	{	
		cin>>inp[i];
		sum+=inp[i];
	}
	int p;
	cin>>p;
	vector < pair<int,int> > list;
	for(int i=0;i<p;i++)
	{
		int m,n;
		cin>>m>>n;
		list.push_back(make_pair(m,n));
	}
	//cout<<sum<<endl;
	cout<<makeTruce(inp,sum,list)<<endl;
}