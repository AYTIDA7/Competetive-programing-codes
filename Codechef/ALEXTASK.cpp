/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include <iostream>
#include<algorithm>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    if(b==0)    return a;
    return gcd(b,a%b);
}
long long int lcm(long long int a,long long int b)
{
     return a*b/gcd(a,b);
}
int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,flag=1;
        cin>>n;
        long long int *a=new long long int[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        long long int min=lcm(a[0],a[1]);
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if(min>lcm(a[j],a[i]))  min=lcm(a[j],a[i]);
       cout<<min<<endl;
               
            
        
    }
    return 0;
}
 