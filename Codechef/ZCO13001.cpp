/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum=0;
    cin>>n;
    long long int *a=new long long int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
            sum+=i*a[i];
            sum-=(n-1-i)*a[i];
    }
    cout<<sum<<endl;
} 