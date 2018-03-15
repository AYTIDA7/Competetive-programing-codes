/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAX 100000000
#define LIM 10000
ll lis[MAX>>6];
#define ifComp(x) (lis[x>>6]&(1<<((x>>1)&31)))
#define isComp(x) (lis[x>>6]|=(1<<((x>>1)&31)))
vector<ll> primes;
void sieve()
{
	register ll i,j,k;
	primes.push_back(2);
	for(i=3;i<LIM;i+=2)
	{
		if(!ifComp(i))
		{
			for(j=i*i,k=i<<1;j<MAX;j+=k)
				isComp(j);
		}
	}
	for(i=3,j=0;j<=50000000&&i<MAX;i+=2)
	{
		if(!ifComp(i))
			primes.push_back(i),j++;
	}
}
int main()
{
	sieve();
	ll t;
	cin>>t;
	
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<primes[n-1]<<endl;

	}
}