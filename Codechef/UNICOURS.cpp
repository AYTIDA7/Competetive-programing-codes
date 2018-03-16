/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,m=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a;
            m=max(m,a);
        }
        cout<<n-m<<endl;
    }
} 