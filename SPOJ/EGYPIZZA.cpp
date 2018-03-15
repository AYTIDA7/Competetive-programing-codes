/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0;
	cin>>n;
	float *ar=new float[n];
	int a1=0,a2=0,a3=0;
	for(int i=0;i<n;i++)
	{
		int a,b;
		char c;
		cin>>a>>c>>b;
		if(a==1&&b==4)
			a1++;
		else if(b==2)
			a2++;
		else
			a3++;
	}
	//cout<<a1<<" "<<a2<<" "<<a3<<endl;
	count+=a3;
	a1=a1-a3;
	count+=(a2-a2%2)/2;
	if(a2%2)
	{
		count++;
		a1-=2;
	}
	if(a1>0)
	{
		count+=(a1-a1%4)/4;
		if(a1%4)
		{
			count++;
		}
	}
	cout<<count+1<<endl;
}