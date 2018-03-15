/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
ll mulmod(ll a,ll b,ll c)
{
	ll x=0,y = a%c;
	
	while(b>0)
	{
		if(b&1) 
			x=(x+y)%c;
		y=(y<<1)%c;
		b=b>>1;
	}
	return x;
}

ll power(ll x,ll y,ll p)
{
	ll res=1;
	x=x%p;
	while(y>0)
	{
		if(y&1)
			res=mulmod(res,x,p);
		y=y>>1;
		x=mulmod(x,x,p);
	}
	return res;
}
bool millerRabin(ll d,ll n)
{
	ll a=2+rand()%(n-4);
	ll x=power(a,d,n);
	if(x==1||x==n-1)
		return true;
	while(d!=n-1)
	{
		x=mulmod(x,x,n);
		d*=2;
		if(x==1)
			return false;
		if(x==n-1)
			return true;
	}
	return false;
}
bool isPrime(ll x)
{
	if(x==2||x==3)
		return true;
	if(x==1||x==0)
		return false;
	if(x%2==0)
		return false;
	ll temp=x-1;
	while(temp%2==0)
		temp/=2;
	for(ll i=0;i<2;i++)
	{
		if(!millerRabin(temp,x))
			return false;
	}
	return true;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<((isPrime(n))?"YES\n":"NO\n");
	}
}