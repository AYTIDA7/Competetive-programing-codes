/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include <bits/stdc++.h>
using namespace std;
long long int findVal(vector <long long int> v,long long int n)
{
    vector <long long int> dp(n,0);
    dp[n-1]=v[n-1],dp[n-2]=v[n-2],dp[n-3]=v[n-3];
    for(long long int i=n-4;i>=0;i--)
    {
        dp[i]=v[i]+min(dp[i+1],min(dp[i+2],dp[i+3]));
    }
    return min(dp[0],min(dp[1],dp[2]));
}
int main()
{
    long long int n;
    cin>>n;
    vector<long long int> v(n);
    for(long long int i=0;i<n;i++)
        cin>>v[i];
    cout<<findVal(v,n)<<endl;
} 