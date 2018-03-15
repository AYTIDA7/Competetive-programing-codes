/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int *a=new long long int[n];
		for(long long int i=0;i<n;i++)
			cin>>a[i];
		long long int m;
		cin>>m;
		long long int *b=new long long int[m];
		for(long long int i=0;i<m;i++)
			cin>>b[i];
		sort(a,a+n);sort(b,b+m);
		long long int minimum=INT_MAX;
		for(long long int i=0;i<n;i++)
			for(long long int j=0;j<m;j++)
				if(abs(a[i]-b[j])<minimum)
			 		minimum=abs(a[i]-b[j]);
		cout<<minimum<<endl;
	}
	return 0;
}