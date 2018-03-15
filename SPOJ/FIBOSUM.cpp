/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
void multiply(long long int a[2][2],long long int b[2][2])
{
	long long int c[2][2];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			c[i][j]=0;
			for(int k=0;k<2;k++)
			{
				c[i][j]+=((a[i][k])*(b[k][j]))%1000000007;
			}
			c[i][j]=c[i][j]%1000000007;
		}
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
			a[i][j]=c[i][j];
	}
}	
void power(long long int a[2][2],unsigned long long int y)
{
	long long int val[2][2]={{1,0},{0,1}};
	while(y>0)
	{
		if(y&1)
			multiply(val,a);
		y=y/2;
		multiply(a,a);
	}
	
	for(int i=0;i<2;i++)
	{	for(int j=0;j<2;j++)
		{
			a[i][j]=val[i][j];
		}
		//cout<<endl;
	}
}	
long long int fibo(long long int n)
{
	long long int a[2][2]={{1,1},{1,0}};
	if(n==1||n==0)
		return n;
	power(a,n-1);
	return a[0][0];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,m;
		cin>>n>>m;
		long long int ans=fibo(m+2)-fibo(n+1);
		if(ans<=0)
			ans+=1000000007;
		cout<<ans<<endl;
	}
}