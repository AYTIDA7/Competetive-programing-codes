/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include<bits/stdc++.h>
using namespace std;
void val(long long int h,long long int a)
{
	long long int t=1;
	h+=3;
	a+=2;
	while(1)
	{
		if(h>20&&a<=10)
		{
			h-=17;
			a+=7;
			t+=2;
		}
		else if(h>5&&a>10)
		{
			h-=2;
			a-=8;
			t+=2;
		}
		 
		else
		{
			cout<<t<<endl;
			break;
		}
	}
}
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int h,a;
		cin>>h>>a;
		val(h,a);
	}
}