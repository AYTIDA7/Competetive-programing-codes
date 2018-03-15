/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int t1=0,t2=0;
		while(a)
		{
			t1=t1*10+a%10;
			a/=10;
		}
		while(b)
		{
			t2=t2*10+b%10;
			b/=10;
		}
		int t3=t1+t2,c=0;
		while(t3)
		{
			c=c*10+t3%10;
			t3/=10;
		}
		cout<<c<<endl;
	}
	return 0;
}