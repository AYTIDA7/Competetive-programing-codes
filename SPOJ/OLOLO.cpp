/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int temp=a[0];
	for(int i=1;i<n;i++)
	{
		temp^=a[i];
	}
	printf("%d\n",temp);
	return 0;
}