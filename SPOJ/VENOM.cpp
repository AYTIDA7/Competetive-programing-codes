/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int h,p,A;
		double a,b,c,d;
		long long int v;
		scanf("%lld %lld %lld",&h,&p,&A);
		if(h<=p) printf("1\n");
		else
		{
			b=(p-2*A);
			a=p;
			c=2*(A-h);
			d=sqrt((b*b)-(4*a*c));
			v=ceil((-1*b+d)/(2*a));
			printf("%d\n",2*v-1);
		}
	}
	return 0;
}