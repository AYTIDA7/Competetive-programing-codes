/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
using namespace std;
long long int merge(long long int a[],long long int l,long long int m,long long int h)
{
	long long int *A=new long long int[m-l+1],*B=new long long int[h-m],i,j,count=0;
	for(i=0;i<m-l+1;i++)
		A[i]=a[l+i];
	for(i=0;i<h-m;i++)
		B[i]=a[m+i+1];
	i=0;j=0;
	long long int k=l;
//	for(i=0;i<m-l+1;i++)
//		cout<<A[i]<<" ";
//		cout<<endl;
//	for(i=0;i<h-m;i++)
//		cout<<B[i]<<" ";
//		cout<<endl;
//	i=0;
	while(i<m-l+1&&j<h-m)
	{
		if(A[i]<=B[j])
		{
			a[k++]=A[i++];
		}
		else
		{
			count+=m-l+1-i;
			a[k++]=B[j++];
		}
	}
	while(i<m-l+1)
	{
		a[k++]=A[i++];
		//count++;
	}
	while(j<h-m)
		a[k++]=B[j++];
	return count;
}
long long int mergesort(long long int a[],long long int l,long long int h)
{
//	cout<<"TEST 1\n";

	long long int count=0;
	if(l<h)
	{//	cout<<"test1"<<endl;
		count+=mergesort(a,l,(l+h)/2);
		count+=mergesort(a,(l+h)/2+1,h);
		count+=merge(a,l,(l+h)/2,h);
	//	cout<<"hello"<<count<<endl;
	}
	return count;
}
int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int *a=new long long int[n];
		for(long long int i=0;i<n;i++)
			cin>>a[i];
		long long int j=mergesort(a,0,n-1);
		cout<<j<<endl;
	//	for(int i=0;i<n;i++)
	//		cout<<a[i]<<" ";
	//	cout<<endl<<endl;
	}
	return 0;
}