/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include <bits/stdc++.h>
using namespace std;
#define INF -9999999999999
long long int findval(vector<vector <long long int> > a,long long int n)
{
    if(n==1)
        return 0;
    long long int M=INF;
    vector <vector<long long int> > dp;
    vector<long long> temp;
    for(int i=0;i<n-1;i++)
        dp.push_back(temp);
    sort(a[n-1].begin(),a[n-1].end());
    for(long long int i=0;i<a[n-2].size();i++)
    {
        //cout<<"test\n";
        long long int m= INF;
    //  for(long long int j=0;j<a[n-1].size();j++)
    //  {
    //      m=max(abs(a[n-1][j]-a[n-2][i])*(n-1),m);
    //  }
    //  M=max(m,M);
    //  dp[n-2].push_back(m);
        //cout<<m<<" ";
        
        m=max(abs(a[n-1][0]-a[n-2][i])*(n-1),abs(a[n-1][a[n-1].size()-1]-a[n-2][i])*(n-1));
        dp[n-2].push_back(m);
        M=max(m,M);
    }
    //cout<<endl;
    dp[n-2].push_back(M);
    M=INF;
    for(long long int k=n-3;k>=0;k--)
    {
        
        long long int l1=a[k].size(),l2=a[k+1].size();
        for(long long int i=0;i<l1;i++)
        {   
            long long int m=INF;
            for(long long int j=0;j<l2;j++)
            {
                long long int s=abs(a[k][i]-a[k+1][j])*(k+1);
                s+=(j==0?dp[k+1][l2-1]:dp[k+1][j-1]);
                
                m=max(m,s);
                //cout<<"m="<<m<<endl;
            }
 
            M=max(m,M);
            dp[k].push_back(m);
        }
        dp[k].push_back(M);
    }
    //for(long long int i=0;i<n-1;i++){
    //  for(long long int j=0;j<dp[i].size();j++)
    //      cout<<dp[i][j]<<" ";
    //  cout<<endl;
    //}
 
    return dp[0][dp[0].size()-1];
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,size;
        cin>>n;
        vector <vector<long long int> > dish;
        for(long long int i=0;i<n;i++)
        {   vector<long long> x;
            cin>>size;
            //dish[i].resize(size);
            for(long long int j=0;j<size;j++){
                int a;
                cin>>a;
                x.push_back(a);
            }
            dish.push_back(x);
        }
        cout<<findval(dish,n)<<endl;
    }
} 