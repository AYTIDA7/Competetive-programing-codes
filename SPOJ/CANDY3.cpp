/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
#include<math.h>
#include<cmath>
using namespace std;

int main() {
	// your code goes hereint t;
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,i;
		long long int sum=0;
		cin>>n;
		long long int *a=new long long int[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
			sum%=n;
		}
		if(sum==0)		cout<<"YES"<<endl;
		else				cout<<"NO"<<endl;
	}

	return 0;
}