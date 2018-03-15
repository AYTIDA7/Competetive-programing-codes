/* Author - Aditya Haridas Menon
   Codechef id - ad2411
   */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    vector<long long int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int j=0,m,flag=0;
    while(1)
    {
        cin>>m;
        if(m==0) break;
        else if(m==2)
        {
            if(j!=n-1)
                j++;
        }
        else if(m==1)
        {
            if(j!=0)
                j--;
        }
        else if(m==3)
        {
            if(a[j]!=0&&flag==0)
            {
                a[j]--;
                flag=1;
            }
        }
        else if(m==4)
        {
            if(a[j]!=h&&flag==1)
            {
                a[j]++;
                flag=0;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
} 
