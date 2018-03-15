/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
int gcd(long long int a,long long int b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);
}
void ballSum(long long int n,long long int k)
{
	long long int dm=n*(n-1),nm;
	nm=k%2==0?(k-2)*k/2:(k-1)*(k-1)/2;
	int g=gcd(nm,dm);
	if(nm!=0&&nm!=dm)
		cout<<nm/g<<"/"<<dm/g<<endl;
	else if(nm==dm)
		cout<<"1"<<endl;
	else cout<<"0"<<endl;
}
int main()
{
	while(1)
	{
		long long int n,k;
		cin>>n>>k;
		if(n==-1)
			break;
		ballSum(n,k);
	}
}
