/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
vector<bool> a(10001,false);
vector<bool> b(10001,false);
int length=0,maximum=0;
int t1;
void dfsVal(vector<int> v[],int val)
{
	if(length>maximum)
	{
		t1=val;
		length=maximum;
	}
	a[val]=true;
	for(vector<int>::iterator i=v[val].begin();i!=v[val].end();i++)
	{
		if(!a[*i])
		{
			length++;
			dfsVal(v,*i);
			length--;
		}
	}
}
int dfs(vector<int> v[],int val)
{
	b[val]=true;
	int count=-1;
	for(vector<int>::iterator i=v[val].begin();i!=v[val].end();i++)
	{
		if(!b[*i])
				count=max(dfs(v,*i),count);
	}
	return count+1;
}
int main()
{
	int n,a,b;
	cin>>n;
	vector <int> v[n+1];
	for(int i=0;i<n-1;i++)
	{
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfsVal(v,1);
	cout<<dfs(v,t1)<<endl;
}