/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include<bits/stdc++.h>
using namespace std;
std::vector<unsigned long long int> allPrimes;
void seive(unsigned long long int n)
{
	allPrimes.clear();
	std::vector<bool> p(n+1,true);
	for(unsigned long long int i=2;i<=sqrt(n);i++)
	{
		if(p[i])
		{
			for(unsigned long long int j=i*2;j<=n;j+=i)
				p[j]=false;
		}
	}
	for(unsigned long long int i=2;i<=n;i++)
		if(p[i])
		{
			allPrimes.push_back(i);
		}
}
void countDivisors(unsigned long long int n)
{
	seive(n);
	unsigned long long int total=1;
	unsigned long long int i=0;

	while(i<allPrimes.size())
	{
		
		unsigned long long int exp=0,p=allPrimes[i];
		long double m=n/p;
	
		while(floor(m))
		{
			exp+=floor(m);
			m/=p;

		}
		total*=(exp+1);
		total%=1000000007;
		i++;
	}
	cout<<total<<endl;
}
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		unsigned long long int n;
		cin>>n;
		countDivisors(n);
	
	}
}