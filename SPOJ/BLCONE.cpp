/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <bits/stdc++.h>
using namespace std;
double bS(int r, int h,double low,double high)
{	
	double mid=low+(high-low)/2;
	if(high-low<0.000001)
		return mid;
	//cout<<mid<<" "<<low<<" "<<high<<endl;
	double l=sqrt(r*r+h*h);
	if(r*pow(mid,3)+3*mid*mid*l-6*h*h*l<0)
		return bS(r,h,mid,high);
	else if(r*pow(mid,3)+3*mid*mid*l-6*h*h*l>0)
		return bS(r,h,low,mid);
	else
		return mid;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int r,h;
		cin>>r>>h;
		double ans=bS(r,h,0,100);
		cout<<fixed<<setprecision(6)<<(ans>h?h:ans)<<endl;
	}
}