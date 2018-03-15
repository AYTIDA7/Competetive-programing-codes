/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
typedef vector <long long int> row;
typedef vector <row> dp;
long long int treatsForCows(long long int a[],int n)
{
	dp d(n+1,row(n+1,0));
	long long int age=1,m=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			int r=j;
			int c=i-j;
			d[r][c]=max(c>0?d[r][c-1]+(i)*a[n-(c)]:0,r>0?d[r-1][c]+(i)*a[r-1]:0);
			m=max(m,d[r][c]);
		}
	}
	return m;
}
int main()
{
	int n,val;
	cin>>n;
	long long int *a=new long long int[n];	
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<treatsForCows(a,n)<<endl;
}