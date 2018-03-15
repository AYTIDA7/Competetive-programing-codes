/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,sum=0;
		cin>>n; 
		long long int *a=new long long int[n];
		for(long long int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=(2*i+1-n)*a[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}
