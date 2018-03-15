/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int m,n,x,k;
		cin>>m>>n;
		if(m>n)	x=m-n;
		else		x=n-m;
		k=x;
	   long long int *p=new long long int[x+1];
		for(int i=0;i<=x;i++)
		{
			//if(m>n)
		//	p[i]=n+i;
		//	else
			p[i]=m+i;
			if(p[i]==1)	p[i]=-1;
			if(!(p[i]%6==1||p[i]%6==5)&&p[i]>3)	p[i]=-1;
		}
	///	for(int i=0;i<=x;i++)
	//	cout<<p[i]<<" ";
	//	cout<<"\n";
		while(k>=0)
		{
			if(p[k]!=-1)
		{	for(long long int i=5;i<=sqrt(p[k]);)
			{
				if(p[k]%i==0)
				{
					p[k]=-1;
					break;
				}
			if(i%6==5)	i+=2;
			else	i+=4;
			}
		}
			k--;
		}
		for(int i=0;i<=x;i++)
			if(p[i]!=-1)
				cout<<p[i]<<endl;
			cout<<endl;
	}
		return 0;
}