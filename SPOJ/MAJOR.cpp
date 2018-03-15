/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,count=1,flag=0;
		scanf("%lld",&n);
		long long int *a=new long long int[n];
		for(long long int i=0;i<n;i++)
			scanf("%lld",&a[i]);
		sort(a,a+n);
		for(long long int i=0;i<n-1;i++)
		{
			if(a[i]==a[i+1])
			{
				count++;
			}
			else	count=1;
			if(count>n/2)
				{
					flag=1;
					printf("YES %lld\n",a[i]);
					break;
				}
			
		//	cout<<count<<" "<<flag<<endl;
		}
		if(!flag)	printf("NO\n");
	
	}
	return 0;
}