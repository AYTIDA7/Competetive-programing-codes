/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
//map<long long int,long long int> lhs,rhs;
long long int calVal(int a[],int n)
{
	long long int count=0;
	vector <long long int> LHS,RHS;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			for(int k=0;k<n;k++)
			{	
				long long int l=a[i]*a[j]+a[k];
				LHS.push_back(l);
				if(a[k]!=0)
				{	
					long long int r=(a[i]+a[j])*a[k];	
					RHS.push_back(r);
				}	
				//lhs[l]++;
				//rhs[r]++;
				
			}
	sort(LHS.begin(),LHS.end());
	sort(RHS.begin(),RHS.end());
	for(vector<long long int >::iterator i=LHS.begin();i!=LHS.end();)
	{
		vector<long long int>::iterator u1,u2,l2=lower_bound(RHS.begin(),RHS.end(),*i);
		u1=upper_bound(LHS.begin(),LHS.end(),*i);
		if(l2!=RHS.end()){
			u2=upper_bound(RHS.begin(),RHS.end(),*i);
			count+=(u1-i)*(u2-l2);
			//cout<<count<<endl;
			//cout<<u1-i<<" "<<u2-l2<<endl;
		}
		i=u1;
	}
	/*for(map<long long int,long long int>::iterator i=rhs.begin();i!=rhs.end();i++)
	{
			count+=lhs[i->first]*(i->second);
	}*/
	return count;

}
int main()
{
	int n;
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<calVal(a,n)<<endl;
}