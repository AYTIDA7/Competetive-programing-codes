/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
			long long int a,b,c;
		scanf("%lld %lld %lld",&a,&b,&c);
		cout<<a*a-2*b<<endl;
	}
	return 0;
}