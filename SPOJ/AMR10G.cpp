/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long int n,k,i,min,d;
	    cin>>n>>k;
	    long int *p=new long int[n];
	    for(i=0;i<n;i++)
	        cin>>p[i];
	    sort(p,p+n);    
	    min=p[k-1]-p[0];
	    for(int i=1,j=k;j<n;j++,i++)
	    {
	        d=p[j]-p[i];
	        if(d<min)   min=d;
	    }
	    cout<<min<<endl;
	    
	}
	return 0;
}
