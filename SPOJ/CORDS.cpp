/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include<iostream>
#include<math.h>
using namespace std;
long long int rec(long long int n)
{
	long long int c=(3*n*n+n)/2;
	return c;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		cout<<rec(n)%1000007<<endl;
	}
	return 0;
}