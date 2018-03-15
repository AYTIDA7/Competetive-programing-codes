/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include <bits/stdc++.h>
using namespace std;
long long int find(vector<long long int> &a,int n,int k)
{
    sort(a.begin(),a.end());
    long long int sum=0;
    for(long long int i=0;i<n;i++)
    {
        long long int m=lower_bound(a.begin(),a.end(),k-a[i])-a.begin();
        //cout<<m<<endl;
        if(m>i)
            sum+=(m-i-1);
    }
    return sum;
}
int main()
{
    long long int n,k;
    cin>>n>>k;
    vector<long long int> ori(n);
    for(long long int i=0;i<n;i++)
        cin>>ori[i];
    cout<<find(ori,n,k)<<endl;
}
 