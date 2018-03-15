/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
//long long int absol(long long int a)	{return a<0?-a:a;}
//long long int maximum(long long int a, long long int b)	{return a>b?a:b;}
long long int fun(long long int a[],long long int size)
{
	long long int dp[5001]={0},M=1;
	dp[size-1]=1;
	
	for(long long int i=size-2;i>=0;i--)
	{
		long long int m=1;
		for(long long int j=i+1;j<size;j++)
		{
			if(abs(a[i])<abs(a[j]))
			{
				if((a[j]<0&&a[i]>0)||(a[j]>0&&a[i]<0))
				{
					m=max(m,1+dp[j]);
				}
			}
		}
		dp[i]=m;
		M=max(dp[i],M);
		//cout<<m<<endl;
		//for(long long int k=0;k<i;k++)
		//	cout<<dp[k]<<"<->"<<a[k]<<"\t";
		//cout<<endl;
		
	}
	//for(long long int k=0;k<size;k++)
	//		cout<<dp[k]<<"<->"<<a[k]<<"\t";
	//	cout<<endl;
	return M;
}
int main()
{
	long long int n;
	cin>>n;
	long long int a[5001];
	for(long long int i=0;i<n;i++)
		cin>>a[i];
	cout<<fun(a,n)<<endl;

}