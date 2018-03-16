/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,j=0;
        cin>>n>>k;
        vector <long long int> a(n),b;
        for(long long int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        for(long long int i=0;i<=a[n-1]+k+1;i++)
        {
            if(b.size()==k+1)
                break;
            if(i!=a[j])
            {
                b.push_back(i);
            }
            else
            {
                j++;
                if(j>0&&a[j]==a[j-1])
                    i--;
            }
        }
        cout<<b[k]<<endl;
        //cout<<"t"<<endl;
    }
} 