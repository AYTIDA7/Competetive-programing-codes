/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
vector <long long int> primes;
vector<long long int> list2;
void sieve(int n)
{
	vector <bool> check(n,true);
	for(int i=2;i<sqrt(n);i++)
	{
		if(check[i])
		{
			primes.push_back(i);
			for(int j=i*i;j<n;j+=i)
				check[j]=false;
		}
	}
	for(int i=sqrt(n);i<n;i++)
		if(check[i])
			primes.push_back(i);
	//for(int i=0;i<primes.size();i++)
	//	cout<<primes[i]<<"\t";
}
void luckyNumber(int n)
{	
	for(int i=30;i<2665;i++)
	{
		int temp=i;
		int j=0,k=0;
		while(temp!=1&&k<3)
		{
			if(temp%primes[j]==0)
			{	
				k++;
				while(temp%primes[j]==0)
					temp/=primes[j];
			}
			else
				j++;
		}
		if(k==3)
			list2.push_back(i);
	}
	//cout<<"test\n";
	//cout<<list.top()<<'\n';
	//for (vector<long long int >::iterator i=list2.begin();i!=list2.end();i++)
	//	cout<<*i<<endl;

}
int main()
{
	sieve(2665);
	luckyNumber(1000);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<list2[n-1]<<"\n";
		
	}
}