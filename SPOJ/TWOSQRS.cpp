/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
void twoSq(long long int n)
{
	long long int i=sqrt(n),j=0;
	while(i>0)
	{
		if(j*j>n)
		{
			cout<<"No\n";
			break;
		}
		if(i*i+j*j==n)
		{
			cout<<"Yes\n";
			break;
		}
		else if(i*i+j*j<n)
			j++;
		else
			i--;
	}
}
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		twoSq(n);
	}
}