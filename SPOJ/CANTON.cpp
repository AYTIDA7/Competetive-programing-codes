/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,i=0,k;
		cin>>n;
		while(1)
		{
			if(2*n<=i*(i+1))
				break;
			i++;
		}
		long long int ul=i*(i+1)/2,ll=i*(i-1)/2+1;
		if(i%2==0)
			k=abs(ll-n);
		else
			k=abs(ul-n);
		cout<<"TERM "<<n<<" IS "<<(1+k)<<"/"<<(i-k)<<endl;
		
	}
}