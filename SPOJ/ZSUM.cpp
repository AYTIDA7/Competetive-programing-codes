/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
long long int power(long long int x, long long int y,long long int p)
{
    int res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x)%10000007;
        y = y>>1; 
        x = (x*x)%p;  
    }
    return res;
}
int main()
{
	
	while(1)
	{
		long long int n,k;
		cin>>n>>k;
		if(n==0&&k==0)
			break;
		long long int t=power(n,k,10000007)+power(n,n,10000007)+2*(power(n-1,n-1,10000007)+power(n-1,k,10000007))%10000007;
		cout<<t%10000007<<endl;
	}
}