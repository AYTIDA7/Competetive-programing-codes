/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include<bits/stdc++.h>
using namespace std;
std::vector<unsigned long long int> value(1000000,0);
void seive(unsigned long long int n=1000000)
{

	value[0]=0;
	value[1]=0;	
	for(unsigned long long int i=1;i<=n;i++)
	{
		value[i]+=value[i-1];
			for(unsigned long long int j=i*2;j<=n;j+=i)
			{
					value[j]+=i;
			}
	}
	
}
unsigned long long int aps(unsigned long long int n)
{
	return value[n];
}
int main()
{
	seive(1000000);
	unsigned long long int t;
	cin>>t;
	while(t--)
	{
		unsigned long long int n;
		cin>>n;
		cout<<aps(n)<<endl;
	
	}
}
