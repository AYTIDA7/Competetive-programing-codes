/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
int findVal(int a[],int b[],int n,int m)
{
	vector <int> dp1,dp2;
	for(int i=a[0];i<=b[0];i++)
		dp1.push_back(i);
	for(int i=1;i<n;i++)
	{
		dp2.clear();
		for(int j=a[i];j<=b[i];j++)
		{
			for(int k=0;k<dp1.size();k++)
			{
				dp2.push_back(dp1[k]+j);
			}
		}
		dp1=dp2;
	}
	int c=0;
	for(int i=0;i<dp1.size();i++)
		c+=(dp1[i]==m)?1:0;
	return c;
}
int main()
{
	while(1)
	{
		int n,m;
		cin>>n>>m;
		if(n==0&&m==0)
			break;
		int *a=new int[n],*b=new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i]>>b[i];
		}
		cout<<findVal(a,b,n,m)<<endl;
	}
}