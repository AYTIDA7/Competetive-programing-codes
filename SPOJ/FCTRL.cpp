/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
#include<math.h>
using namespace std;

int main() {
	
	// your code here
	int t;
	cin>>t;
	while(t--)
	{
		long long int k,i=1;
		cin>>k;
		long long int sum=0;
		while(pow(5,i)<=k)
		{
			sum+=k/pow(5,i);
			i++;
		}
		cout<<sum<<endl;
	}

	return 0;
}