/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include<iostream>
using namespace std;
int main()
{
	int n,flag=1;
	do
	{
		cin>>n;
		if(n)
		{
			long long int ans=(n*(2*n+1)*(n+1))/6;
			cout<<ans<<endl;
		}
		else flag=0;
	}while(flag);
	return 0;
}