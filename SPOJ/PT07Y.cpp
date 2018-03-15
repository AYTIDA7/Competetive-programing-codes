/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
vector<int> parent(1000000,-1);
int find(int i)
{
    if (parent[i] == -1)
        return i;
    return find(parent[i]);
}
void Union(int x, int y)
{
    int xset = find(x);
    int yset = find(y);
    parent[xset] = yset;
}
void isCycle(vector<int> v[],int n)
{
    for(int i=0;i<n;i++)
    {
        int x=find(v[i][0]);
		int y=find(v[i][1]);
        if (x == y)
        {
           	cout<<"NO\n";
           	return;
		}
  	 	Union( x, y);	
    }
	cout<<"YES\n";
}
int main()
{
	int n,m,a,b;
	cin>>n>>m;
	vector <int> v[20001];
	for(int i=0;i<m;i++)
	{
		cin>>a>>b;
		v[i].push_back(a);
		v[i].push_back(b);
	}
	if(n!=m+1)
	{
		cout<<"NO\n";
		return 0;
	}
	isCycle(v,m);
}