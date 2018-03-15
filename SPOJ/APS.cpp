/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include<bits/stdc++.h>
using namespace std;
std::vector<unsigned long long int> value(10000000,0);
void seive(unsigned long long int n=10000000)
{

	value[0]=0;
	value[1]=0;	
	std::vector<bool> p(n+1,true);
	for(unsigned long long int i=2;i<=sqrt(n);i++)
	{
		if(p[i])
		{
			value[i]=i+value[i-1];
			for(unsigned long long int j=i*2;j<=n;j+=i)
			{
					p[j]=false;
					value[j]=(value[j]==0?i:value[j]);
			}
		}
		else
			value[i]+=value[i-1];
	}
	for(unsigned long long int i=sqrt(n)+1;i<=n;i++)
	{
		if(p[i])	value[i]=i+value[i-1];
		else
					value[i]+=value[i-1];
		
	}
}
unsigned long long int aps(unsigned long long int n)
{
	return value[n];
}
int main()
{
	seive(10000000);
	unsigned long long int t;
	cin>>t;
	while(t--)
	{
		unsigned long long int n;
		cin>>n;
		cout<<aps(n)<<endl;
	
	}
}
