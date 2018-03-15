/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include <bits/stdc++.h>
using namespace std;
int find(vector<int> &a,int n,int k)
{
    sort(a.begin(),a.end());
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        int m=lower_bound(a.begin(),a.end(),a[i]+k)-a.begin();
        sum+=n-m;
    }
    return sum;
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> ori(n);
    for(int i=0;i<n;i++)
        cin>>ori[i];
    cout<<find(ori,n,k)<<endl;
}
 