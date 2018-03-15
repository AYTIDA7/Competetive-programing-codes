/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include <bits/stdc++.h>
using namespace std;
long long int findVal(vector <long long int> v,long long int n)
{
    vector <long long int> dp(n,0);
    dp[n-1]=v[n-1],dp[n-2]=v[n-2]+v[n-1];
    dp[n-3]=max(v[n-1]+v[n-3],max(dp[n-2],v[n-2]+v[n-3]));
    long long int m=dp[n-3];
    for(long long int i=n-4;i>=0;i--)
    {
        dp[i]=max(v[i]+v[i+1]+dp[i+3],max(v[i]+dp[i+2],dp[i+1]));
        m=max(m,dp[i]);
    }
    /*for(int i=0;i<n;i++)
    {
        cout<<dp[i]<<" ";
    }*/
    cout<<endl;
    return m;
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