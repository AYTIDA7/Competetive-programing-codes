/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int m;
	cin>>m;
	while(m--)
	{
		long long int n;
		cin>>n;
		long long int t;
		if(n%2)
		t=n*(n+1)*(n+2)/6+(n*n-1)*(2*n+3)/24;
		else
		t=n*(n+1)*(n+2)/6+n*(n+2)*(2*n-1)/24;
		cout<<t<<endl;
	}
	return 0;
}