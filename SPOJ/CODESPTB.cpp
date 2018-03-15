/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll merge(ll ar[],ll low,ll high)
{
	ll inv=0;
	ll mid=low+(high-low)/2;
	ll *l=new ll[mid-low+1];
	ll *r=new ll[high-mid];
	ll i=0;
	for(ll j=low;j<=mid;j++,i++)
		l[i]=ar[j];
	i=mid+1;
	for(ll j=0;i<=high;j++,i++)
		r[j]=ar[i];
	
	ll k=low;
	ll j=0;
	i=0;
	while(i<mid-low+1&&j<high-mid)
	{
		if(r[j]<l[i])
		{
			ar[k++]=r[j++];
			inv+=mid-low+1-i;
		}
		else
			ar[k++]=l[i++];
	}
	while(j<high-mid)
	{
		ar[k++]=r[j++];
		
	}
	while(i<mid-low+1){
		ar[k++]=l[i++];
		
	}
	//cout<<low<<" "<<high<<" "<<inv<<endl;
	return inv;

}
ll mergeSort(ll ar[],ll low,ll high)
{
	if(low<high)
	{//cout<<"test\n";
		ll mid=low+(high-low)/2;
		ll inv=mergeSort(ar,low,mid)+mergeSort(ar,mid+1,high);
		inv+=merge(ar,low,high);
		return inv;
	}
	return 0;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll *a=new ll[n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		cout<<mergeSort(a,0,n-1)<<endl;
	}
}