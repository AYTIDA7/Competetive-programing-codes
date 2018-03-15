/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include <bits/stdc++.h>
using namespace std;
int minCost(vector<int> a, int n)
{
    vector<int> dp1(n),dp2(n);
    dp1[0]=a[0];
    dp1[1]=a[1]+a[0];
    dp1[2]=a[2]+a[0];
    for(int i=3;i<n;i++)
        dp1[i]=a[i]+min(dp1[i-1],dp1[i-2]);
    int t1=min(dp1[n-1],dp1[n-2]);
    dp2[0]=a[0];
    dp2[1]=a[1];
    for(int i=2;i<n;i++)
        dp2[i]=a[i]+min(dp2[i-1],dp2[i-2]);
    int t2=dp2[n-1];
    return min(t1,t2);
}
int main()
{
    int n;
    cin>>n;
    vector <int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<minCost(a,n)<<endl;
} 