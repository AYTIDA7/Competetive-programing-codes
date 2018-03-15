/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include<iostream>
#include<algorithm>
#include<map>
#include<limits.h>
using namespace std;
map <int,int> X;
int buyingApples(int a[],int size)
{
	int *val=new int[size+1];
	val[0]=0;
	for(int i=1;i<=size;i++)
	{
		int v=INT_MAX;
		for(int j=0;j<i;j++)
		{
			if(X.find(j)==X.end())
				v=min(v,a[j]+val[i-j-1]);
		}
			val[i]=v;
		//	cout<<val[i]<<endl;

}
	return val[size];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		X.clear();
		int *a=new int[k];
		for(int i=0;i<k;i++)
		{
			cin>>a[i];
			if(a[i]==-1)
				X[i]=i;
		}
		int val=buyingApples(a,k);
		cout<<(val<0||val==INT_MAX?-1:val)<<endl;
	}
}