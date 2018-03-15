/* Author - Aditya Haridas Menon
   Spoj id - ad2411

*/	
#include<iostream>
#include<math.h>
#include<cmath>
#include<algorithm>
using namespace std;
int gcd(int a, int b)
{  // cout<<"min of"<<a<<" "<<b<<"="<<min(a,b)<<endl;
    if(b%a==0)  return min(a,b);
    return gcd(b%a,min(a,b));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        float etf=n;
        for(int i=2;i<=sqrt(n);i++)
        {   //cout<<"gcd="<<gcd(i,n)<<endl;
           // if(gcd(i,n)==1)     count++;
           if(n%i==0)
           	{	while(n%i==0)
           		n/=i;//cout<<endl<<(1.0-1.0/(float)i)<<endl;// cout<<etf<<endl<<i<<endl;
           		etf*=(1.0-1.0/(float)i);}
           	//	cout<<n<<endl<<endl;
        }
        if(n>1)
        etf*=(1.0-1.0/(float)n);
        cout<<etf<<endl;
        
    }
    return 0;
}