/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include<iostream>
#include<algorithm>
using namespace std;
long long int kcows(long long int l,long long int h,long long int k, long long int a[],long long int size)
{
	if(l>=h)
		return l-1;
	long long int med=l+(h-l)/2;
	long long int n=1,p=0;
	for(long long int i=1;i<size;i++)
	{
		if(a[i]-a[p]>=med)
		{
			n++;
			p=i;
		}
	}
	if(n>=k)
		kcows(med+1,h,k,a,size);
	else
		kcows(l,med,k,a,size);
}
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		long long int *a=new long long int[n];
		for(long long int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		cout<<kcows(a[0],a[n-1],k,a,n)<<endl;
	}
}