/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
int b;
void optimus(int fee[],int joy[],int budget,int size)
{
	int **a=new int*[size+1];
	for(int t=0;t<=size;t++)
		a[t]=new int[budget+1];
	for(int i=0;i<=size;i++)
		for(int j=0;j<=budget;j++)
		{
			if(i==0||j==0)
				a[i][j]=0;
			else if(fee[i-1]<=j)
				a[i][j]=max(a[i-1][j-fee[i-1]]+joy[i-1],a[i-1][j]);
			else
				a[i][j]=a[i-1][j];
		}
	//return a[size][budget];
		for(int j=0;j<=budget;j++)
			if(a[size][j]==a[size][budget])
			{
				cout<<j<<" "<<a[size][budget]<<endl;
				break;
			}
}
int main()
{
	while(1)
	{
		int n,j;
		cin>>n>>j;
		if(n==0&&j==0)
			break;
		int *a=new int[j];
		int *b=new int[j];
		for(int i=0;i<j;i++)
			cin>>a[i]>>b[i];
		optimus(a,b,n,j);
	}
}