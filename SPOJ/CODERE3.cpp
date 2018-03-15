/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
int cdr(int a[],int n)
{
	int lis[1001],lds[1001];
	lis[0]=lds[n-1]=1;
	for(int i=n-2;i>=0;i--)
	{
		int mx=1;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				mx=max(mx,1+lds[j]);
			}
		}
		lds[i]=mx;
	}
	for(int i=1;i<n;i++)
	{
		int mx=1;
		for(int j=0;j<i;j++)
		{
			if(a[i]>a[j])
			{
				mx=max(mx,1+lis[j]);
			}
		}
		lis[i]=mx;
	}
	int M=1;
	for(int i=0;i<n;i++)
		M=max(M,lis[i]+lds[i]-1);
		//cout<<lis[i]<<"\t"<<lds[i]<<endl;
	return M;

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int *a=new int[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cout<<cdr(a,n)<<endl;
	}
}