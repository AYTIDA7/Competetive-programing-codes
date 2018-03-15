/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include<iostream>
#include<map>
using namespace std;
map<long long int,long long int> b;
long long int coin(long long int a)
{
	if(a==0)	return 0;
	if(a==1)	return 1;
	if(a==2)	return 2;
	if(a==3)	return 3;
	if(b.find(a)!=b.end())	return b[a];

//if(a>=(a/2+a/3+a/4))
//return a;
	long long int x=coin(a/2)+coin(a/3)+coin(a/4);
	if(x<a)
		{
		b[a]=a;
		return a;
		}
	else	
		{b[a]=x;
		return b[a];
	}
}
int main()
{
	int t;
	long long int a;
	while(cin>>a)
	{
	

	cout<<coin(a)<<endl;
	}
	return 0;
}